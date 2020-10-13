#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(type, a, b) { type temp = a; a = b; b = temp; }

int c(const void*a,const void*b){
  return *(int*)b-*(int*)a;
}
int n,k;
int *a;
int main() {
  scanf("%d%d",&n,&k);
  a=array(n,int);
  rep(i,n)scanf("%d",a+i);
  qsort(a,n,sizeof(int),c);
  //rep(i,n)printf("%d\n",a[i]);
  ll ans=0;
  for(int i=k;i<n;i+=1)ans+=a[i];
  printf("%lld\n",ans);
  free(a);
  return 0;
}
