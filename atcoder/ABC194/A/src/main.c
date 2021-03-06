#include <stdio.h>
#include <stdlib.h>

#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define lrep(i, n) for (ll i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(a, b) { int temp = a; a = b; b = temp; }
#define lswap(a, b) { ll temp = a; a = b; b = temp; }

int main() {
  int a,b;
  scanf("%d%d",&a,&b);

  int x=a+b;
  int y=b;

  int ans;
  if(x>=15 && y>=8){
    ans=1;
  }else{
    if(x>=10&&y>=3){
      ans=2;
    }else{
      if(x>=3){
        ans=3;
      }else{
        ans=4;
      }
    }
  }

  printf("%d\n",ans);
  return 0;
}
