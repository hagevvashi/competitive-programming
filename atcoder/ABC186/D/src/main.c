#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define rep(i, n, type) for (type i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(a, b, type) { type temp = a; a = b; b = temp; }

ll foo(ll * a, ll cnt) {
  ll ans = 0;
  for (ll i = 1; i < cnt; i+=1){
    ans += labs(a[0] - a[i]);
  }
  return ans;
}

int main() {
  ll n;
  scanf("%lld",&n);
  ll a[n];
  rep(i,n,ll){
    scanf("%lld",a+i);
  }
  ll ans=0;
  rep(i,n,ll){
    ans+=foo(a+i,n-i);
  }

  printf("%lld\n",ans);
  return 0;
}
