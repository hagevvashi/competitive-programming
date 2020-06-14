#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define rep(i, n) for(int i=0; i<(n); ++i)
#define max 288199999999999999

int main() {
  long N;
  scanf("%ld", &N);

  if (N > pow(10, 12)) {
    return 1;
  }

  long j = 0;

  rep(i, N) {
    if (i == 0) {
      continue;
    }
    if (N % i == 0) {
      N = N % i;
      j = i;
      break;
    }
  }

  long z[max];

  dfs(&N, z, &i);

  return 0;
}
