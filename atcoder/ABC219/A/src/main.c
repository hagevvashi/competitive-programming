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
  int x;
  scanf("%d",&x);
  int ans;
  if(x<40){
    ans=40-x;
  }else{
    if(x<70){
      ans=70-x;
    }else{
      if(x<90){
        ans=90-x;
      }else{
        puts("expert");
        return 0;
      }
    }
  }
  printf("%d\n",ans);
  return 0;
}
