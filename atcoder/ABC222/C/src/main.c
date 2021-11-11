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
  int n,m;
  scanf("%d%d",&n,&m);
  char a[2*n][m+1];
  rep(i,2*n){
    /* rep(j,m){ */
    /*   a[i][j] */
    /* } */
    scanf("%s",a[i]);
  }
  // 組み合わせ ((2*k)-1)位 (2*k)位
  // 0 ラウンドの順位 1:1,2:2,3:3,4:4
  // 1 ラウンドの組み合わせ 1位と2位(1,2) 3位と4位(3,4)
  // 1 ラウンドの結果 2 の勝ち 3 の勝ち
  // 勝数のテーブル 1:0, 2:1, 3:1, 4:0
  // 順位 1:2, 2:3, 3:1, 4:4

  int ranking[m+1][2*n];
  for(int i=1;i<=2+n;i+=1){
    ranking[0][i-1]=i;
  }

  for(int i=1;i<=4;i+=1){
    for(int k=1;k<=n;k+=1){
      ((2*k)-1)-1
    }
    
  }

  return 0;
}
