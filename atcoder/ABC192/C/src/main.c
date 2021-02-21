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

ll arr[10010];

int co(const void*a,const void*b){
  return *(ll*)b-*(ll*)a;
}

int f1(ll x){
  ll l=0;
  while(1){
    ll p=pow(10,l);
    ll q=pow(10,l+1);

    ll a=x%q;
    ll b=x%p;
    ll c=a-b;

    /* printf("a: %lld\n",a); */
    /* printf("b: %lld\n",b); */
    /* printf("c: %lld\n",c); */

    if(b==x)break;

    arr[l]=c/p;

    l+=1;
  }

  qsort(arr,l,sizeof(ll),co);

  /* rep(i,l){ */
  /*   printf("%lld\n",arr[i]); */
  /* } */

  ll re=0;

  rep(i,l){
    ll j=l-(i+1);
    ll p=pow(10,j);
    /* printf("p: %lld\n",p); */
    ll a=arr[i]*p;
    /* printf("a: %lld\n",a); */
    ll b=arr[j]*p;
    /* printf("b: %lld\n",b); */
    re+=a-b;
  }

  return re;
}

int f2(ll n){
  ll c[20]={};
  while(n){
    c[n%10]+=1;
    n/=10;
  }
  ll g1=0,g2=0;
  for(int i=9;i>=0;i-=1)rep(j,c[i])g1=g1*10+i;
  for(int i=0;i<=9;i+=1)rep(j,c[i])g2=g2*10+i;
  return g1-g2;
}

int main() {
  ll n,k;
  scanf("%lld%lld",&n,&k);
  ll ans=n;
  rep(i,k){
    ans=f2(ans);
  }
  printf("%lld\n",ans);
  return 0;
}
