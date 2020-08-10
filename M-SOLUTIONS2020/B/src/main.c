#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807
#define array(N, t) (t*)calloc(N, sizeof(t))

void hoge(int A, int B, int C, int K, int * is_fullfilled) {
  if (K == 0) {
    if (C > B) {
      if (B > A) {
        *is_fullfilled = 1;
        return;
      }
    }
    return;
  }

  hoge(A * 2, B, C, K - 1, is_fullfilled);
  hoge(A, B * 2, C, K - 1, is_fullfilled);
  hoge(A, B, C * 2, K - 1, is_fullfilled);
}

/**
 * Operation
 *   rep(i, K) {
 *     A *= 2 or B *= 2 or C *= 2
 *   }
 * Condition
 *   C > B > A
 * Question
 *   if the Operation fullfil the Condition
 */
int main() {
  int A, B, C;
  scanf("%d%d%d", &A, &B, &C);

  int K;
  scanf("%d", &K);

  int is_fullfilled = 0;

  hoge(A * 2, B, C, K - 1, &is_fullfilled);
  hoge(A, B * 2, C, K - 1, &is_fullfilled);
  hoge(A, B, C * 2, K - 1, &is_fullfilled);

  if (is_fullfilled == 1) {
    printf("%s\n", "Yes");
  } else {
    printf("%s\n", "No");
  }

  return 0;
}
