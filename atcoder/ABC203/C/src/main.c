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

typedef struct{
  ll a;
  int b;
}F;

F f[200010];

int n,k;
int j=0;

int rest;

int c(const void*l,const void*r){
  return ((F*)l)->a - ((F*)r)->a;
}

int walk(int now){
  if(rest<1){
    return now;
  }
  rest-=1;

  for(int i=j;i<n;i+=1){
    if(f[i].a==now){
      j+=1;
      rest+=f[i].b;
      break;
    }
  }

  return walk(now+1);
}

int main() {
  // init
  rep(i,200010){
    f[i].a=0;
    f[i].b=0;
  }

  scanf("%d%d",&n,&k);
  rest=k;

  rep(i,n){
    scanf("%lld%d",&f[i].a,&f[i].b);
  }
  // debug
  /* rep(i,n){ */
  /*   printf("%lld\n",f[i].a); */
  /* } */

  qsort(f,n,sizeof(F),c);

  // debug
  /* rep(i,n){ */
  /*   printf("%lld\n",f[i].a); */
  /* } */

  printf("%d\n",walk(0));
  return 0;
}
