#include <stdio.h>
#include <stdlib.h>

#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define lrep(i, n) for (ll i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(a, b) { int temp = a; a = b; b = temp; }
#define lswap(a, b) { ll temp = a; a = b; b = temp; }

int digits(ll x){
  int r=1;
  ll y=x;
  while(1){
    y/=10;
    if(y<1){
      break;
    }else{
      r+=1;
    }
  }
  return r;
}

int main() {
  ll n;
  ll ans=INF;
  scanf("%lld",&n);
  ans=min(ans,max(digits(1),digits(n)));
  for(ll i=2;i*i<=n;i+=1){
    if(n%i==0){
      ans=min(ans,max(digits(i),digits(n/i)));
    }
  }
  printf("%lld\n",ans);
  return 0;
}
