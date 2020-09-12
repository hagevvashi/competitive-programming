#include <stdio.h>

/**
 * aとbの最大公約数を求める関数
 * (16, 24)
 * -> 8
 *
 * よくある計算式
 * case 1: 8(2, 3)<end>
 * case 2: 4(4, 6) + 2(2, 3)<end>
 * case 3: 2(8, 12) + 2(4, 6) + 2(2, 3)<end>
 *
 * このアルゴリズム(Euclid の互除法と呼ぶらしい)
 * 1: 16 % 24 -> 16
 * 2: 24 % 16 -> 8
 * 3: 16 % 8 -> 0
 * 4: return 8
 *
 * @param a
 * @param b
 * @return int
 */
int gcd(int a, int b) {
  // 割り切れる数かどうか確かめたい
  int r = a % b;
  while(r != 0) {
    a = b;
    b = r;
    r = a % b;
  }
  return b;
}

int main() {
    long long x = 0;

    int K;
    scanf("%d", &K);

    for (int a = 1; a <= K; a++) {
        for (int b = 1; b <= a; b++) {
            for (int c = 1; c <= b; c++) {
                if (a == b && b == c) {
                    x += a;
                } else if (a == b || b == c || c == a){
                    x += 3 * gcd(gcd(a, b), c);
                } else {
                    x += 6 * gcd(gcd(a, b), c);
                }
            }
        }
    }

    printf("%lld\n", x);
    return 0;
}
