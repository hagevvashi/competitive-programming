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

ll d[300010]={0};

int compare_ll(const void *l,const void *r){
  return *(ll*)l-*(ll*)r;
}

int main() {
  ll n;
  scanf("%lld",&n);
  ll a[n];
  lrep(i,n)scanf("%lld",a+i);
  qsort(a, n, sizeof(ll), compare_ll);
  /* rep(i,n){ */
  /*   printf("%d ",a[i]); */
  /* } */
  /* puts(""); */
  ll c=1;
  lrep(i,n-1){
    if(a[i]==a[i+1]){
      c+=1;
      if((i+1)==(n-1)){
        d[c]+=1;
      }
    }
    if(a[i]!=a[i+1]){
      if(c!=1){
        d[c]+=1;
        c=1;
      }
    }
  }
  ll s=0;
  lrep(i,300010){
    if(d[i]!=0){
      /* printf("i: %d\n",i); */
      /* printf("d[i]: %d\n",d[i]); */
      ll re=(i*(i-1))/2; // iC2
      re*=d[i]; // iC2 を個数分
      // printf("%lld\n",re);
      s+=re;
    }
  }
  ll ans=((n)*(n-1))/2;
  ans-=s;
  printf("%lld\n",ans);
  return 0;
};
