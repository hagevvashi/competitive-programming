#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
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

  ll x=powl(2,n);
  ll a[x];
  ll b[x];
  lrep(i,x){
    scanf("%lld",a+i);
    b[i]=i+1;
  }

  ll count=x/2;

  while(1){
    // printf("count: %lld\n",count);
    if(count/1==1)break;
    lrep(i,count){
      ll l=i*2;
      ll r=l+1;
      // a[i]=max(a[l],a[r]);
      if(a[l]>a[r]){
        a[i]=a[l];
        b[i]=b[l];
      }else{
        a[i]=a[r];
        b[i]=b[r];
      }
    }
    count/=2;
  }


  // printf("l: %lld,%lld\n",a[0],b[0]);
  // printf("r: %lld,%lld\n",a[1],b[1]);

  if(a[0]>a[1]){
    printf("%lld\n",b[1]);
  }else{
    printf("%lld\n",b[0]);
  }

  return 0;
}
