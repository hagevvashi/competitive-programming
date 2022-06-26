#include <stdio.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))

int l,n;

int main() {
  scanf("%d",&l);
  scanf("%d",&n);

  int x[n];
  rep(i,n)scanf("%d",x+i);

  int min_t=0;
  rep(i,n){
    min_t=max(min_t,min(x[i],l-x[i]));
  }

  int max_t=0;
  rep(i,n){
    max_t=max(max_t,max(x[i],l-x[i]));
  }

  printf("%d %d\n",min_t,max_t);
}
