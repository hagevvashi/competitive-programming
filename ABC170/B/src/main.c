#include <stdio.h>
#include <string.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807

int main() {
  // n: 亀の数
  // X - n: 鶴の数
  long long n = 0;

  char output[4] = "No";
  short X, Y;
  scanf("%hd%hd", &X, &Y);

  // 全部鶴のパターンからはじめ
  // 亀を一匹ずつ増やと同時に鶴を一匹ずつ減らす
  // 鶴が0匹になるまで続ける
  while(X - n >= 0) {
    // 鶴と亀の足を合計した数がYになったら終了
    if ((4 * n) + (2 * (X - n)) == Y) {
      strcpy(output, "Yes");
      break;
    }
    n += 1;
  }

  printf("%s\n", output);
  return 0;
}
