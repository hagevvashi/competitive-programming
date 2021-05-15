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

typedef struct {
  char name[16];
  ll height;
} Mountain;

int c(const void*a,const void*b){
  return ((Mountain*)b)->height - ((Mountain*)a)->height;
}

int main() {
  int n;
  scanf("%d",&n);
  Mountain m[n];
  rep(i,n){
    scanf("%s%lld",m[i].name,&m[i].height);
  }
  /* puts("before"); */
  /* rep(i,n){ */
  /*   puts(m[i].name); */
  /*   printf("%lld\n",m[i].height); */
  /* } */
  qsort(m,n,sizeof(Mountain),c);
  /* puts("after"); */
  /* rep(i,n){ */
  /*   puts(m[i].name); */
  /*   printf("%lld\n",m[i].height); */
  /* } */
  puts(m[1].name);
  return 0;
}
