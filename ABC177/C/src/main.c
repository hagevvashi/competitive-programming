#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))

const int MOD = 1000000007;
int N;
ll * A;

ll solve() {
  ll ans = 0;

  int m = N - 1;
  int j = 0;

  while(1) {
    if (m == 0) break;
    rep(i, m) {
      ans = ((ans % MOD) + ((A[j] % MOD) * (A[j + 1 + i] % MOD))) % MOD;
      // printf("A[j]: %lld\n", A[j]);
      // printf("A[j] MOD: %d\n", A[j] % MOD);
      // printf("A[j + 1 + i]: %lld\n", A[j + 1 + i]);
      // printf("A[j + 1 + i] MOD: %d\n", A[j + 1 + i] % MOD);
      // printf("ans: %lld\n", ans);
    }
    j += 1;
    m -= 1;
  }

  return ans;
}

int main() {
  scanf("%d", &N);
  A = array(N, ll);
  rep(i, N) scanf("%lld", A + i);

  printf("%lld\n", solve());

  free(A);
  return 0;
}
