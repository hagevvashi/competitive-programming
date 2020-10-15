#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(type, a, b) { type temp = a; a = b; b = temp; }

int n,k,m;
int main() {
  scanf("%d%d%d",&n,&k,&m);
  int sum=0;
  rep(i,n-1) {
    int a;
    scanf("%d",&a);
    sum+=a;
  }
  int ans=m*n-sum;
  if(ans>k){ans=-1;}else{
    if(ans<0){ans=0;}
  }
  printf("%d\n",ans);
  return 0;
}
