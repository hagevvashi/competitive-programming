#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(type, a, b) { type temp = a; a = b; b = temp; }

int main() {
  long double sx,sy,gx,gy;
  scanf("%Lf%Lf%Lf%Lf",&sx,&sy,&gx,&gy);
  int vgx=gx-sx;

  long double a;
  long double foo=sy*vgx;
  long double bar=sy+gy;
  a=foo / bar;
  a+=sx;
  printf("%.10Lf\n",a);
  return 0;
}
