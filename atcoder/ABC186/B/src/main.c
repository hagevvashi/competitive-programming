#include <stdio.h>
#include <stdlib.h>

#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define rep(i, n, type) for (type i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(a, b, type) { type temp = a; a = b; b = temp; }

int a[110][110];

int main() {
  int H,W;
  scanf("%d%d",&H,&W);
  rep(h,H,int){
    rep(w,W,int){
      scanf("%d",a[h]+w);
    }
  }

  int m = 1000000000;

  rep(h,H,int){
    rep(w,W,int){
      m=min(m,a[h][w]);
    }
  }

  int ans=0;
  rep(h,H,int){
    rep(w,W,int){
      ans += a[h][w] - m;
    }
  }

  printf("%d\n",ans);

  return 0;
}
