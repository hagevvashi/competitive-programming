#include <stdio.h>
#include <stdlib.h>

#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(type, a, b) { type temp = a; a = b; b = temp; }

int main() {
  int n,m;
  scanf("%d%d",&n,&m);
  int d=4*m;
  // printf("d: %d\n",d);
  int a[n];
  rep(i,n)scanf("%d",a+i);
  int s=0;
  rep(i,n){
    s+=a[i];
  }
  // printf("s: %d\n",s);
  int cnt=0;
  rep(i,n){
    // printf("a[%d]: %d\n",i,a[i]);
    // printf("a[%d]*d: %d\n",i,a[i]*d);
    if(a[i]*d<s){}else cnt+=1;
    if(cnt==m)break;
  }
  // printf("cnt: %d\n",cnt);
  if(cnt<m)puts("No");
  else puts("Yes");
  return 0;
}
