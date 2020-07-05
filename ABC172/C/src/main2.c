#include <stdio.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807

int main() {
  long long int N, M, K, A[200001] = {0}, B[200001] = {0};
  scanf("%lld%lld%lld", &N, &M, &K);

  for (long long i = 1; i <= N; i += 1) {
    scanf("%lld", A + i);
    A[i] += A[i - 1];
  }

  for (long long i = 1; i <= M; i += 1) {
    scanf("%lld", B + i);
    B[i] += B[i - 1];
  }

  long long j = M, ans = 0;
  // Aの机の上にある本を0冊始めてN冊まで1冊ずつ増やしていく
  for (long long i = 0; i <= N; i += 1) {
    // Bの机の上にある本をM冊から始めて0冊まで1冊ずつ減らしていく
    // 0冊になった時か、Ai冊Bj冊の合計時間が制限時間（K）以下になったらループ終了
    while(j > 0 && A[i] + B[j] > K) {
      j -= 1;
    }

    // Ai冊Bj冊の合計時間が制限時間（K）以下の時
    if (A[i] + B[j] <= K) {
      // max(i + j, ans)のsyntax shugar
      ans = i + j < ans ? ans : i + j;
    }
  }

  printf("%lld\n", ans);
}
