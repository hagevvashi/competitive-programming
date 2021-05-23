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
  int n;
  scanf("%d",&n);
  int a[n],b[n],c[n];
  rep(i,n){
    scanf("%d",a+i);
    a[i]-=1;
  }
  rep(i,n){
    scanf("%d",b+i);
    b[i]-=1;
  }
  rep(i,n){
    scanf("%d",c+i);
    c[i]-=1;
  }
  ll ans=0;
  rep(i,n)rep(j,n){
    if(a[i]==b[c[j]]){
      ans+=1;
    }
  }
  printf("%lld\n",ans);
  return 0;
}
