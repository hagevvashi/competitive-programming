#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
  ll r,x,y;
  scanf("%lld%lld%lld",&r,&x,&y);

  double d=hypot(x,y);

  if(d==r){
    puts("1");
  }else{
    if(d<=2*r){
      puts("2");
    }else{
      printf("%d\n",(int)ceil(d/r));
    }
  }

  return 0;
}
