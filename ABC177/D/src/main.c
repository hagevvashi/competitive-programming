#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))

int N, M;
int * A;
int * B;

int main() {
  scanf("%d%d", &N, &M);
  A = array(M, int);
  B = array(M, int);
  rep(i, M) {
    scanf("%d%d", A + i, B + i);
  }

  rep(i, M) {
    A[i] -= 1;
    B[i] -= 1;
  }

  free(A);
  free(B);
  return 0;
}
