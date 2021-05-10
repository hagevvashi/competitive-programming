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
  int n,k;
  scanf("%d%d",&n,&k);
  ll v=n;
  rep(i,k){
    printf("v: %lld\n",v);
    if(v%200==0){
      // nが200の倍数
      v/=200;
    }else{
      v*=1000;
      v+=200;
    }
  }
  printf("%lld\n",v);
  return 0;
}
