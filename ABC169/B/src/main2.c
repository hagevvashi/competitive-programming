#include <stdio.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 1000000000000000000
#define MAX_INT 9223372036854775807

void debug(char * string, long long int target) {
  printf("%s", string);
  printf("%lld", target);
  printf("%c", '\n');
}

int main() {
  int N;
  scanf("%d", &N);

  long long output = 1;
  long long A;
  short isOverflow = 0;
  rep(i, N) {
    scanf("%lld", &A);
    if (A == 0) {
      output = 0;
      break;
    }
    /* printf("output: %lld\n", output); */
    /* printf("MAX / output: %.5f\n", (double)MAX / (double)output); */
    /* printf("A: %lld\n\n", A); */
    // 1e18を今までの積のトータルで割った値が次の入力値以下であれば続投
    if (MAX / output < A) {
      output = 1; // overflow させるのも嫌だしなんとなく1にしておく。
      // break; // break してはいけない。あくまで 64bit 整数の範囲を超えないかどうかのチェックしただけ
      // 全ての積の結果をみないと、後で0が来るパターンに対応できない。
      isOverflow = 1;
    }
    output *= A;
  }
  if (output == 0) {
  } else {
    if (isOverflow == 1) {
      output = -1;
    }
  }

  printf("%lld\n", output);
  return 0;
}
