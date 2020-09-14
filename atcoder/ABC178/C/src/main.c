#include <stdio.h>
#include <stdlib.h>

#define rep(type, i, n) for (type i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(type, a, b) { type temp = a; a = b; b = temp; }

const ll mod = 1000000007;

ll powmod(ll x, ll y) {
  ll res = 1;
  rep(ll, i, y) {
    res *= x;
    res %= mod;
  }
  return res;
}

int main() {
  ll N;
  scanf("%lld", &N);

  ll a = powmod(10, N);
  // printf("a: %lld\n", a);

  ll b = powmod(9, N);
  // printf("b: %lld\n", b);

  ll c = b;
  // printf("c: %lld\n", c);

  ll d = powmod(8, N);
  // printf("d: %lld\n", d);

  ll ans = (a + d) - (b + c);
  ans %= mod;
  ans = (ans + mod) % mod;

  printf("%lld\n", ans);

  return 0;
}
