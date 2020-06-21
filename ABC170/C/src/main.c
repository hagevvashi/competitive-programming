#include <stdio.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807

short find(short target, short p[], short n) {
  short ret_val = 0;
  //  printf("target: %hd\n", target);
  rep(i, n) {
    //    printf("i: %d\n", i);
    //    printf("p[i]: %hd\n\n", p[i]);
    if (p[i] == target) {
      ret_val = 1;
      break;
    }
  }
  //  printf("ret_val: %hd\n", ret_val);
  return ret_val;
}

// Xとの差が一番小さい not p な値を求める
int main() {
  short X, N;

  scanf("%hd%hd", &X, &N);

  short p[N]; // p[N] >= 1
  char null;
  if (N == 0) {
    scanf("%c", &null);
  } else {
    rep(i, N) {
      scanf("%hd", p + i);
    }
  }

  short output = 0;
  // X + i || X - i
  // i += 1
  // N = 100 の時最悪
  // 並び替えが必要??
  rep(i, 100) {
    if (find(X - i, p, N) == 0) {
      output = X - i;
      break;
    } else {
      if (find(X + i, p, N) == 0) {
        output = X + i;
        break;
      }
    }
  }

  printf("%hd\n", output);

  return 0;
}
