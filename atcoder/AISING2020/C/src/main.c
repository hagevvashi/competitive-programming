#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807
#define array(N, t) (t *)calloc(N, sizeof(t))

int main() {
  int N;
  scanf("%d", &N);

  int * f = array(N + 1, int);

  rep(i, 100) {
    int x = i + 1;
    rep(j, 100) {
      int y = j + 1;
      rep(k, 100) {
        int z = k + 1;
        int sum = (int)(((int)pow(x + y, 2) +
                         (int)pow(x + z, 2) +
                         (int)pow(y + z, 2)) / 2);
        if (sum <= N) {
          f[sum] += 1;
        }
      }
    }
  }

  rep(i, N) {
    printf("%d\n", f[i + 1]);
  }

  free(f);
  return 0;
}
