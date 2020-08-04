#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807
#define array(N, t) (t*)calloc(N, sizeof(t))

int main() {
  int N;
  scanf("%d", &N);

  char * C = array(N, char);
  scanf("%s", C);

  int w_count = 0, r_count = 0;

  rep(i, N) {
    if (C[i] == 'W') {
      w_count += 1;
    } else {
      r_count += 1;
    }
  }

  if (w_count > r_count) {
    printf("%d\n", r_count);
  } else {
    printf("%d\n", w_count);
  }

  free(C);
  return 0;
}
