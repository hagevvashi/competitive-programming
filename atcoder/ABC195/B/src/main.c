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

typedef struct {
  int l; // 最小値
  int r; // 最大値
} ANS;


/**
 * main 関数から呼ばれる。出力結果を返すだけ
 *
 * 選択するみかんの個数をnとする
 * 制約条件(1<=A,A<=B,B<=1000,1<=W,W<=1000,1<=_W,_W<=1000000)より
 * 制約上の最小(g)である1という状況を考えて、nが取りうる値をすべて試していく
 * nがとりうる最小値は1(1個で(1000*W)(g)になるケース)
 * nがとりうる最大値は1000*W(1(g)で10000000個必要なケース)
 * 実際の範囲は a(g) * n(個) ~ b(g) * n(個)
 * W が上記に収まる範囲で n がなかった場合には l(最小値) が INF のままになる
 * @param[in] a 最小の重さのみかんの重さ(g)
 * @param[in] b 最大の重さのみかんの重さ(g)
 * @param[in] w 合計の重さ(kg)
 * @return 取りうる最小値と最大値を含む構造体
 */
ANS solve(const int a,const int b,const int w){
  int W=w*1000;
  ANS ans;
  ans.l=INF;
  ans.r=-INF;
  for(int n=1;n<=W;n+=1){
    if(a*n<=W&&W<=b*n){
      ans.l=min(ans.l,n);
      ans.r=max(ans.r,n);
    }
  }
  return ans;
}

/**
 * ANS.l が INF だったら UNSATISFIABLE になる
 */
int main() {
  int a,b,w;
  scanf("%d%d%d",&a,&b,&w);
  ANS ans=solve(a,b,w);
  if(ans.l==INF)puts("UNSATISFIABLE");
  else printf("%d %d\n",ans.l,ans.r);
  return 0;
}
