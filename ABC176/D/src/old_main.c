#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))

void hoge(int i, int j, int H, int W, char S[H][W], int Ci, int Cj, int * ans) {
  printf("ans: %d\n", *ans);

  if (i < 0) {
    return;
  }
  if (j < 0) {
    return;
  }
  if (i >= H) {
    printf("Hhoge\n");
    return;
  }
  if (j >= W) {
    printf("Hhoge\n");
    return;
  }
  if (S[i][j] == '#') {
    return;
  }
  if (*ans == 0) {
    return;
  }
  if (i == Ci) {
    if (j == Cj) {
      *ans = 0;
      return;
    }
  }

  int i_diff = abs(i - Ci);
  int j_diff = abs(j - Cj);

  int i_cnt = i_diff % 2 == 0 ? i_diff / 2 : (i_diff / 2) + 1;
  int j_cnt = j_diff % 2 == 0 ? j_diff / 2 : (j_diff / 2) + 1;

  int cnt = max(i_cnt, j_cnt);

  printf("cnt: %d\n", cnt);

  *ans = min(*ans, cnt);

  hoge(i - 1, j, H, W, S, Ci, Cj, ans);
  hoge(i + 1, j, H, W, S, Ci, Cj, ans);
  hoge(i, j + 1, H, W, S, Ci, Cj, ans);
  hoge(i, j + 1, H, W, S, Ci, Cj, ans);
}

int main() {
  int H, W;
  scanf("%d%d", &H, &W);

  int C[2] = {0};
  int D[2] = {0};
  scanf("%d%d", &C[0], &C[1]);
  scanf("%d%d", &D[0], &D[1]);
  C[0] -= 1;
  C[1] -= 1;
  D[0] -= 1;
  D[1] -= 1;

  char S[H][W + 1];
  rep(i, H) {
    scanf("%s", S[i]);
  }

  // S[C[0]][C[1]]: スタート
  // S[D[0]][D[1]]: ゴール

  int ans = 1e9;

  hoge(D[0], D[1], H, W, S, C[0], C[1], &ans);

  printf("%d\n", ans);

  return 0;
}
