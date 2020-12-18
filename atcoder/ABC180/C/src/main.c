#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define rep(i, n, type) for (type i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(type, a, b) { type temp = a; a = b; b = temp; }

int c(const void * a, const void * b) {
  if (*(ll *)a - *(ll *)b > 0) {
    return 1;
  } else {
    if (*(ll *)a - *(ll *)b == 0) {
      return 0;
    } else {
      return -1;
    }
  }
}

/**
 * n の約数に関する例
 *
 * n = 36 の時
 * 1 * 36, 2 * 18, 3 * 12, 4 * 9, sqrt(36) * sqrt(36)
 * -> 1, 2, 3, 4, 6(sqrt36), 9, 12, 18, 36
 *
 * N = 20 の時
 * 1 * 20, 2 * 10, 4 * 5, sqrt(20) * sqrt(20)
 * -> 1, 2, 4, (sqrt(20)), 5, 10, 20
 *
 * sqrt(n) の両端の数が一致している。対になっている
 * sqrt(n) までインクリメントしながら割り切れるパターンの両方を計上していけば O(sqrt(n)) で計算できる
 *
 */
int main() {
  ll n, a[1000000], cnt = 0;

  scanf("%lld", &n);

  for (ll i = 1; i <= sqrt(n); i += 1) {
    if (n % i == 0) {
      a[cnt] = i;
      cnt += 1;
      // 平方根が整数のケース
      if (i == n / i) {
        continue;
      }
      a[cnt] = n / i;
      cnt += 1;
    }
  }

  qsort(a, cnt, sizeof(ll), c);

  rep(i, cnt, ll) {
    printf("%lld\n", a[i]);
  }

  return 0;
}
