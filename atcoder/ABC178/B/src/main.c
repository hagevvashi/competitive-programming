#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(type, a, b) { type temp = a; a = b; b = temp; }

int main() {
  ll a, b, c, d;
  scanf("%lld%lld%lld%lld", &a, &b, &c, &d);

  // printf("max(c, d): %d\n", max(c, d));

  ll ans = 0;

  ans = max(a, b) * max(c, d);

  ans = max(ans, min(a, b) * max(c, d));

  ans = max(ans, max(a, b) * min(c, d));

  ans = max(ans, min(a, b) * min(c, d));

  printf("%lld\n", ans);

  return 0;
}
