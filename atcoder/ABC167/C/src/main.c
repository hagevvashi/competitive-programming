#include <stdio.h>
#include <stdlib.h>

static int compareFunction(const void *lhs, const void *rhs) {
  if (lhs > rhs) {
    return 1;
  } else {
    if (lhs == rhs) {
      return 0;
    } else {
      return -1;
    }
  }
}

/**
 * N: 売っている参考書の数
 * M: 学びたいアルゴリズムの数
 * X: アルゴリズムそれぞれの理解度を最低ここまでにしたい目標値
 **/
int main() {
  short N, M;
  int K;
  scanf("%hd%hd%d", &N, &M, &K);

  int C[N], A[N][M];
  for (short i = 0; i < N; i += 1) {
    scanf("%d", C + i);
    for (short j = 0; j < M; j += 1) {
      scanf("%d", A[N] + j);
    }
  }

  int sum[M];
  short iteration_count[M];
  for (short j = 0; j < M; j += 1) {
    for (short i = 0; i < N; i += 1) {
      sum[j] = sum[j] + A[i][j];
      if (sum[j] >= K) {
        iteration_count[j] = i + 1;
        break;
      }
    }
  }

  qsort(kind, amount, sizeof(*kind), compareFunction);

  return 0;
}
