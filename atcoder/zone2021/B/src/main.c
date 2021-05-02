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
  int n,D,H;
  scanf("%d%d%d",&n,&D,&H);
  int d[n],h[n];
  rep(i,n)scanf("%d%d",d+i,h+i);
  /* int mah=0; */
  /* int mai=0; */
  double mb=(double)0;
  rep(i,n){
    /* int prev_mah=mah; */
    /* mah=max(mah,h[i]); */
    /* if(prev_mah<mah){ */
    /*   mai=i; */
    /* } */
    double b=(double)h[i]-(((double)d[i]*((double)H-(double)h[i]))/((double)D-(double)d[i]));
    /* printf("b: %.15lf\n",b); */
    mb=max(mb,b);
    /* printf("mb: %.15lf\n",mb); */
  }
  // h[mai] - ( ( (H - h[mai]) / (D - d[mai]) ) * d[mai] )
  /* double b=h[mai]-((d[mai]*(H-h[mai]))/(D-d[mai])); */

  /* printf("mai: %d\n",mai); */
  /* printf("mah: %d\n",mah); */
  printf("%.15lf\n",mb);
  return 0;
}
