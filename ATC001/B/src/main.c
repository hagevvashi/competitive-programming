#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))

int main() {
  int N, Q;
  scanf("%d%d", &N, &Q);

  int * P = array(Q, int);
  int * A = array(Q, int);
  int * B = array(Q, int);
  rep(i, Q) {
    scanf("%d%d%d", P + i, A + i, B + i);
  }

  free(P);
  free(A);
  free(B);

  return 0;
}
