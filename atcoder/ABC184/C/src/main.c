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
  ll r1,c1,r2,c2;
  scanf("%lld%lld",&r1,&c1);
  scanf("%lld%lld",&r2,&c2);

  if(r1+c1==r2+c2){
    printf("%d\n",1);
    return 0;
  }
  if(r1-c1==r2-c2){
    printf("%d\n",1);
    return 0;
  }
  if((labs(r1-r2)+labs(c1-c2))<=3){
    printf("%d\n",1);
    return 0;
  }

  if((labs(r1-r2)+labs(c1-c2))<=6){
    printf("%d\n",2);
    return 0;
  }

  ll nr2 = r2-r1;
  ll nc2 = c2-c1;

  if(nr2<0)nr2=-nr2;
  if(nc2<0)nc2=-nc2;

  return 0;
}
