#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(type, a, b) { type temp = a; a = b; b = temp; }

int main() {
  int n;
  scanf("%d",&n);
  ll x[n];
  rep(i,n)scanf("%lld",x+i);
  ll ma=0;
  long double uc=0;
  int ch=0;
  rep(i,n){
    if(x[i]<0)x[i]=-x[i];
    ma+=x[i];
    uc+=x[i]*x[i];
    ch=max(x[i],ch);
  }
  printf("%lld\n",ma);
  printf("%.15Lf\n",sqrtl(uc));
  printf("%d\n",ch);

  return 0;
}
