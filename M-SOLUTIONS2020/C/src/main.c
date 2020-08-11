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

  long long int * S = array(K - 1, long long int);
  rep(i, K) {
    S[i] = 1;
    rep(j, K) {
      S[i] *= A[j + i];
    }
  }

  rep(i, K - 1) {
    // printf("%lld\n", S[i]);
    if (S[i + 1] > S[i]) {
      printf("Yes\n");
    } else {
      printf("No\n");
    }
  }

  free(S);
  return 0;
}
