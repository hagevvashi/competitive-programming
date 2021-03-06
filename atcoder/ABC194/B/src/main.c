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
  int a;
  int b;
} Capacity;

int main() {
  int n;
  scanf("%d",&n);
  Capacity c[n];
  Capacity *min_a;
  Capacity *min_b;
  rep(i,n){
    scanf("%d%d",&c[i].a,&c[i].b);
  }

  // 一人でやったときの最速パターンを出しておく

  int tmp=INF;
  rep(i,n){
    tmp=min(c[i].a+c[i].b,tmp);
  }

  min_a=&c[0];
  min_b=&c[0];

  rep(i,n){
    min_a = c[i].a < min_a->a ? &c[i] : min_a;
  }

  rep(i,n){
    if(&c[i]==min_a)continue;
    min_b = c[i].b < min_b->b ? &c[i] : min_b;
  }

  int tmp_a=max(min_a->a,min_b->b);

  min_a=&c[0];
  min_b=&c[0];

  rep(i,n){
    min_b = c[i].b < min_b->b ? &c[i] : min_b;
  }

  rep(i,n){
    if(&c[i]==min_b)continue;
    min_a = c[i].a < min_a->a ? &c[i] : min_a;
  }

  int tmp_b=max(min_a->a,min_b->b);

  /* printf("tmp: %d\n",tmp); */
  /* printf("tmp_a: %d\n",tmp_a); */
  /* printf("tmp_b: %d\n",tmp_b); */

  int ans=min(tmp,min(tmp_a,tmp_b));

  printf("%d\n",ans);

  return 0;
}
