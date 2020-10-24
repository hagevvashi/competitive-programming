#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(type, a, b) { type temp = a; a = b; b = temp; }

int n;
int *a;
int *l;
int *r;
int gcd(int x,int y){
  if(y == 0)return x;
  return gcd(y,x%y);
}
int main() {
  scanf("%d",&n);
  a=array(n,int);
  l=array(n,int);
  r=array(n,int);
  rep(i,n)scanf("%d",a+i);
  rep(i,n-1)l[i+1]=gcd(l[i],a[i]);
  for(int i=n-1;i>=1;--i)r[i-1]=gcd(r[i],a[i]);
  int ans=1;
  rep(i,n)ans=max(ans,gcd(l[i],r[i]));
  printf("%d\n",ans);
  free(a);
  free(l);
  free(r);
  return 0;
}
