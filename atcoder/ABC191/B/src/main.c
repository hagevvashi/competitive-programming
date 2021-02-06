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
  ll x;
  scanf("%d%lld",&n,&x);
  ll a[n];
  rep(i,n)scanf("%lld",a+i);
  int is_init=1;
  rep(i,n){
    if(a[i]!=x){
      if(is_init){
        printf("%lld",a[i]);
        is_init=0;
      }else{
        printf(" %lld",a[i]);
      }
    }
  }
  puts("");
  return 0;
}
