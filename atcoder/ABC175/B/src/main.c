#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807
#define array(N, t) (t*)calloc(N, sizeof(t))

int main() {
  int N;
  scanf("%d", &N);

  int * L = array(N, int);
  rep(i, N) {
    scanf("%d", L + i);
  }

  int cnt = 0;
  for (int i = 0; i < N - 2; i += 1) {
    for (int j = 1; j < N - 1; j += 1) {
      if (L[i] == L[j]) {
        continue;
      }
      if (i >= j) {
        continue;
      }
      for (int k = 2; k < N; k += 1) {
        if (L[i] == L[k]) {
          continue;
        }
        if (L[j] == L[k]) {
          continue;
        }
        if (i >= k) {
          continue;
        }
        if (j >= k) {
          continue;
        }
        if (L[i] + L[j] > L[k]) {
          if (L[j] + L[k] > L[i]) {
            if (L[k] + L[i] > L[j]) {
              /* printf("i, k, j: %d, %d, %d\n", i, j, k); */
              /* printf("L[i], L[k], L[j]: %d, %d, %d\n", L[i], L[j], L[k]); */
              cnt += 1;
            }
          }
        }
      }
    }
  }


  printf("%d\n", cnt);
  free(L);
  return 0;
}
