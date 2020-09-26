#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(type, a, b) { type temp = a; a = b; b = temp; }

int main() {
  int K, N;
  scanf("%d%d", &K, &N);

  int * A;
  A = array(N + 1, int);

  rep(i, N) {
    scanf("%d", A + i);
  }
  A[N] = K + A[0];

  int l = 0;
  rep(i, N) {
    l = max(l, A[i + 1] - A[i]);
  }

  printf("%d\n", K - l);

  return 0;
}
