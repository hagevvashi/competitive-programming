#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807
#define array(N, t) (t*)calloc(N, sizeof(t))

int main() {
  int N, K;
  scanf("%d%d", &N, &K);
  int * P = array(N, int);
  int * C = array(N, int);

  long long int ans = 0;
  printf("%lld\n", ans);

  free(P);
  free(C);
  return 0;
}
