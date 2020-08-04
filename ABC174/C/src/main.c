#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807
#define array(N, t) (t*)calloc(N, sizeof(t))

int main() {
  int K;
  scanf("%d", &K);

  int mod_K = 7 % K;

  for (int i = 1; i <= K; i += 1) {
    if (mod_K == 0) {
      printf("%d\n", i);
      return 0;
    }
    mod_K = ((mod_K * 10) + 7) % K;
  }

  printf("-1\n");
  return 0;
}
