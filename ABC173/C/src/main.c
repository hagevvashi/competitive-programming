#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807
#define array(N, t) (t*)calloc(N, sizeof(t))

int main() {
  int H, W, K;
  char S[10][10];
  scanf("%d%d%d", &H, &W, &K);

  rep(i, H) {
    scanf("%s", S[i]);
  }

  int ans = 0;
  // 1<<3 -> 1000(2) -> 8(10)
  // 000, 001, 010, 011, 100, 101, 110, 111
  //   0,   1,   2,   3,   4,   5,   6,   7
  rep(is, 1<<H) {
    rep(js, 1<<W) {
      // 黒のマス目の数
      int cnt = 0;
      rep(i, H) {
        rep(j, W) {
          // n桁目のbitが立っているか判定したい
          // 101 >> 0   => 101
          // 101 &  001 => 001
          // 101 >> 1   => 010
          // 010 &  001 => 000

          // 立っていたら（塗りつぶされていたら）continue
          if (is>>i&1) {
            continue;
          }
          if (js>>j&1) {
            continue;
          }

          // そのマスが黒だったらカウントアップ
          if (S[i][j] == '#') {
            cnt += 1;
          }
        }
        // 黒マスの個数が入力値のKと一致したら回答の個数をインクリメント
        if (cnt == K) {
          ans += 1;
        }
      }
    }
  }
  printf("%d\n", ans);
  return 0;
}
