#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))

int main() {
  int N;
  scanf("%d", &N);

  int * A = array(N, int);
  rep(i, N) {
    scanf("%d", A + i);
  }

  ll ans = 0;
  for (int i = 1; i < N; i += 1) {
      /* printf("i: %d\n", i); */
      /* printf("A[i - 1]: %d\n", A[i - 1]); */
      /* printf("A[i]: %d\n", A[i]); */
    int diff = A[i - 1] - A[i];
    /* printf("diff: %d\n", diff); */
    if (diff > 0) {
      A[i] += diff;
      ans += diff;;
      /* printf("ans: %lld\n", ans); */
    }
  }

  printf("%lld\n", ans);

  free(A);
  return 0;
}
