#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))

int main() {
  int N, X, T;
  scanf("%d%d%d", &N, &X, &T);

  int mod = N % X;
  int ans = 0;
  if (mod == 0) {
    ans = (int)(N / X) * T;
  } else {
    ans = ((int)(N / X) + 1) * T;
  }

  printf("%d\n", ans);

  return 0;
}
