#include <stdio.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)

#define MAX 100010
#define MAX_INT 9223372036854775807
#define ARR_MAX 100000000

void debug(char * string, long long target) {
  printf("%s", string);
  printf("%lld", target);
  printf("%c", '\n');
}

long long A[ARR_MAX];
int main() {
  int N;
  scanf("%d", &N);
  rep(i, N) {
    scanf("%lld", &A[i]);
  }

  int zero = 0;
  rep(i, N) {
    if (A[i] == 0) {
      zero = zero + 1;
    }
  }

  if (zero > 0) {
    // a[i] contains 0
    printf("0\n");
    return 0;
  }

  long long prod = 1;
  rep(i, N) {
    if (A[i] <= 1000000000000000000 / prod) {
      // This condition is equivalent to prod * a[i] <= 10^18
      prod *= A[i];
    } else {
      printf("-1\n");
      return 0;
    }
  }
  printf("%lld\n", prod);
  return 0;
}
