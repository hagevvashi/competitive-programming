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
  int n,x;
  scanf("%d%d",&n,&x);
  int v[n],p[n];
  rep(i,n)scanf("%d%d",v+i,p+i);
  int nx=x*100;
  int s=0;
  int ans=INF;
  rep(i,n){
    s+=v[i]*p[i];
    if(s>nx){
      ans=i+1;
      break;
    }
  }
  if(ans==INF){
    ans=-1;
  }
  printf("%d\n",ans);
  return 0;
}
