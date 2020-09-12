#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807
#define array(N, t) (t*)calloc(N, sizeof(t))

int main() {
  long long X, K, D;
  scanf("%lld%lld%lld", &X, &K, &D);

  X = labs(X);
  long long ans = 0;

  // 繰り返しを行わない判定
  // X - (K * D) >= 0
  // X >= (K * D)
  // X / D >= K
  if (X / D >= K) {
    // X - (K * D) >= 0 なので overflow は心配しなくて良い
    ans = X - (K * D);
  } else {
    // X / D は繰り返すまでの操作回数
    // X / D 回 D ずつ操作した数が、繰り返し直前までの差分
    // その差分を X から引くことで、繰り返し直前の値がわかる
    ans = X - ((X / D) * D);
    // 繰り返すまでの操作回数を K から引いた残りの数について
    // 偶数なら、繰り返すだけなので答えはそのまま
    // 奇数なら、|繰り返し直前の値 - D| だけ原点から離れる
    if ((K - (X / D)) % 2 == 1) {
      ans = labs(ans - D);
    }
  }

  printf("%lld\n", ans);

  return 0;
}
