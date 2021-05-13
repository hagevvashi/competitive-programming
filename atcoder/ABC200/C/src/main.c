#include <stdio.h>
#include <stdlib.h>

#define ll long long
#define INF 2147483647
#define LINF ((1LL << 62) - (1LL << 31))
#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define lrep(i, n) for (ll i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(a, b) { int temp = a; a = b; b = temp; }
#define lswap(a, b) { ll temp = a; a = b; b = temp; }

int main() {
  ll n;
  scanf("%lld",&n);
  ll a[n];
  rep(i,n)scanf("%lld",a+i);
  int cnt[200];
  rep(i,200)cnt[i]=0;
  rep(i,n)cnt[a[i]%200]+=1;
  ll ans=0;
  rep(i,200)ans+=((ll)cnt[i]*(ll)(cnt[i]-1))/2;// nC2 => (n*(n-1))/2
  printf("%lld\n",ans);
  return 0;
}
