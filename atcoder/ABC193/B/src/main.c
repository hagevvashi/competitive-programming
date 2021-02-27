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
  int ans=INF;
  rep(i,n){
    int a,p,x;
    scanf("%d%d%d",&a,&p,&x);
    // 到着時にいくつ在庫が減っているか
    // a個減っているからx-a
    // x-aが0以下か
    // x-aが1以上の時のpで一番低いものを出力
    // x-aが全部0以下だったら-1出力
    if((x-a)<=0){
      // tbd
    }else{
      ans=min(ans,p);
    }
  }
  if(ans==INF){
    puts("-1");
  }else{
    printf("%d\n",ans);
  }
  return 0;
}
