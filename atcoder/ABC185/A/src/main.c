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
  int a1,a2,a3,a4;
  scanf("%d%d%d%d",&a1,&a2,&a3,&a4);

  int ans=1000000000;
  ans=min(ans,a1);
  ans=min(ans,a2);
  ans=min(ans,a3);
  ans=min(ans,a4);

  printf("%d\n",ans);

  return 0;
}
