#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807
#define array(N, t) (t*)calloc(N, sizeof(t))

int main() {
  int N, K;
  scanf("%d%d", &N, &K);

  int * A = array(N, int);
  rep(i, N) {
    scanf("%d", A + i);
  }

  rep(i, N - K) {
    if (A[i + K] > A[i]) {
      printf("Yes\n");
    } else {
      printf("No\n");
    }
  }

  free(A);
  return 0;
}
