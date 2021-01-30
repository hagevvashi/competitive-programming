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

int main() {
  int n;
  ll s,d;
  scanf("%d%lld%lld",&n,&s,&d);
  int flg=0;
  ll x[n],y[n];
  rep(i,n)scanf("%lld%lld",x+i,y+i);
  rep(i,n){
    if(x[i]>=s){continue;}else{
      if(y[i]<=d){continue;}else{
        flg=1;
        break;
      }
    }
    if(y[i]<=d){continue;}else{
      if(x[i]>=s){continue;}else{
        flg=1;
        break;
      }
    }
  }
  if(flg>0){
    puts("Yes");
  }else{
    puts("No");
  }
  return 0;
}
