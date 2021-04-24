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
  int n;
  scanf("%d",&n);
  int a[n],b[n];
  rep(i,n)scanf("%d",a+i);
  rep(i,n)scanf("%d",b+i);
  int max_a=1,min_b=INF;
  rep(i,n){
    max_a=max(a[i],max_a);
    min_b=min(b[i],min_b);
  }
  int ans=(min_b-max_a)+1;
  ans=ans>=0?ans:0;
  printf("%d\n",ans);
  return 0;
}
