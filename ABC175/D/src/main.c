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
  // max を求める
  rep(si, N) {
    // 常に現在地を示す
    // 移動した先の今の場所を示すこともある
    // まずは、今の位置である i を設定
    int current_position = si;

    // 移動先のマスに書かれたscoreの配列を取っておく
    int score_array[10010] = {0};
    int score_index = 0;

    // 1周期の和が正か負か判定するために取っておく
    ll total = 0;

    // この中でPに従って移動を行う
    // 周期に入るのを検出したらそこで終わる
    while(1) {
      // 現在地を更新
      current_position = P[current_position];
      score_array[score_index] = C[current_position];
      total += C[current_position];
      // 周期判定
      // 移動した先が現在地だったら終わり
      if (si == current_position) {
        break;
      }
      score_index += 1;
    }

    // 周期の長さ
    int period_length = score_index + 1;
    // 今までの累積和
    // あるところで切った時の累積
    ll now = 0;
    // scoreの配列のどこで切るのかというのを試す
    // period_length 箇所の内どこで切る？
    rep(i, period_length) {
      now += score_array[i];
      // Kが1の時に2の場所で区切ることはできないから
      if (i + 1 > K) {
        break;
      }
      // まず1周期の和で場合分けを行う
      // 負の場合は前の方で切る方が良い
      // 正の場合は後ろの方で切る方が良い
      // 正の場合は可能な限り積む
      if (total > 0) {
        // 残り回数
        ll rest = (K - (i + 1));
        // 可能な回数
        ll possibility = rest / period_length;
        now += total * possibility;
      }
      ans = max(ans, now);
    }
  }

  printf("%lld\n", ans);

  free(P);
  free(C);
  return 0;
}
