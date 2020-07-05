#include <stdio.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807

int main() {

  int N, M, K, A[200001] = {0}, B[200001] = {0};
  scanf("%d%d%d", &N, &M, &K);

  rep(i, N) {
    scanf("%d", A + i + 1);
    A[i + 1] += A[i];
  }

  rep(i, M) {
    scanf("%d", B + i + i);
    B[i + 1] += B[i];
  }

  int ans = 0;
  int j = M;
  rep(i, N + 1) {
    while(j > 0 && A[i] + B[j] > K) {
      j -= 1;
    }
    if (A[i] + B[j] <= K) {
      ans = i + j > ans ? i + j : ans;
    }
  }

  printf("%d\n", ans);

  return 0;
}
