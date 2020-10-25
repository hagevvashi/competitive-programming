#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(type, a, b) { type temp = a; a = b; b = temp; }

int n,m;
int *a,*b,*c,*d;
int main() {
  scanf("%d%d",&n,&m);
  a=array(n,int);
  b=array(n,int);
  c=array(m,int);
  d=array(m,int);
  rep(i,n){
    scanf("%d",a+i);
  }
  rep(i,n){
    scanf("%d",b+i);
  }
  rep(i,m){
    scanf("%d%d",c+i,d+i);
  }
  puts("foo");
  free(a);
  free(b);
  free(c);
  free(d);
  return 0;
}
