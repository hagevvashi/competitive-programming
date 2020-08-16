#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807
#define array(N, t) (t*)calloc(N, sizeof(t))

int main() {
  long long X, K, D;
  scanf("%lld%lld%lld", &X, &K, &D);

  // FIXME: X > 0 が前提。X <= 0 のケースはまた後で
  long long s = labs(X) / D;
  // FIXME: K > s が前提。K <= s のケースはまた後で
  long long t = labs(K - s);

  long long ans = 0;

  if (t % 2 != 0) {
    long long u = (long long int)(X % D);
    if (u < D) {
      ans = labs(u - D);
    } else {
      ans = D - u;
    }
  } else {
    ans = X % D;
  }

  printf("%lld\n", ans);

  return 0;
}
