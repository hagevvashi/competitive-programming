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
int * A;

int solve() {
  int ans = 0;
  int x = 0;

  rep(i, N) {
    ans = (ans + (ll)A[i] * x) % MOD;
    x = (x + A[i]) % MOD;
  }

  return ans;
}

int main() {
  scanf("%d", &N);
  A = array(N, int);
  rep(i, N) scanf("%d", A + i);

  printf("%d\n", solve());

  free(A);
  return 0;
}
