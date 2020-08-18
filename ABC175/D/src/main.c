#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL<<62)-(1LL<<31))
#define max(p,q)((p)>(q)?(p):(q))
#define min(p,q)((p)<(q)?(p):(q))

int main() {
  int N, K;
  scanf("%d%d", &N, &K);
  int * P = array(N, int);
  int * C = array(N, int);
  // 入力は1から始まるが配列indexは0から始まるため、-1しておく
  rep(i, N) {
    P[i] -= 1;
  }
  ll ans = -INF;

  // 開始位置を0から順番に試す
  rep(i, N) {
    // current_position: 移動した先
    int current_position = i;

    // 移動先のマスに書かれたscoreの配列を取っておく
    int score_array[10010] = {0};
    int score_index = 0;

    // この中でPのに従って移動を行う
    // 周期に入るのを検出したらそこで終わる
    while(1) {
      current_position = P[current_position];
      score_array[score_index] = C[current_position];
      if (i == current_position) {
        break;
      }
      score_index += 1;
    }
    // scoreの配列のどこで切るのかというのを試す
    // TBD
  }

  printf("%lld\n", ans);

  free(P);
  free(C);
  return 0;
}
