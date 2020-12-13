#include <stdio.h>
#include <stdlib.h>

#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define rep(i, n, type) for (type i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(type, a, b) { type temp = a; a = b; b = temp; }

int main() {
  ll l,ans=1;
  scanf("%lld",&l);
  rep(i,11,ll){
    ans*=l-(i+1);
    ans/=(i+1);
  }
  printf("%lld\n",ans);
  return 0;
}
