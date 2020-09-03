#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))

int * parent;

int root(int x) {
  if (parent[x] == x) {
    return x;
  }
  return parent[x] = root(parent[x]);
}

int same(int x, int y) {
  return root(x) == root(y);
}

void unite(int x, int y) {
  x = root(x);
  y = root(y);

  if (x == y) {
    return;
  }

  parent[x] = y;
}

int main() {
  int N, Q;
  scanf("%d%d", &N, &Q);

  // initialize
  parent = array(N, int);
  rep(i, N) {
    parent[i] = i;
  }

  int * P = array(Q, int);
  int * A = array(Q, int);
  int * B = array(Q, int);
  rep(i, Q) {
    scanf("%d%d%d", P + i, A + i, B + i);
  }

  rep(i, Q) {
    if (P[i] == 0) {
      unite(A[i], B[i]);
    } else {
      printf("%s\n", (same(A[i], B[i]) ? "Yes" : "No"));
    }
  }

  free(parent);
  free(P);
  free(A);
  free(B);

  return 0;
}
