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
  int r,x,y;
  scanf("%d%d%d",&r,&x,&y);
  ll glsqr=(x*x)+(y*y);
  double gl=sqrt(glsqr);
  ll rsqr=r*r;

  ll t;
  if(glsqr%rsqr==0){
    // ぴったし
    t=glsqr/rsqr;
    t=sqrt(t);
  }else{
    //puts("こっちとおるかな");

    int i=1;
    while(1){
      /* if(r*r*i>=glsqr){ */
      /*   break; */
      /* } */
      /* i+=1; */
      if(r*i>=gl){
        break;
      }
      i+=1;
    }

    //    i-=1;

    // t=sqrt(i);//+1;
    t=i;
  }

  printf("%lld\n",t);

  return 0;
}
