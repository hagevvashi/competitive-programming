#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))

int N;
int * parent;

int root(int x) {
  // printf("x: %d\n", x);
  if (parent[x] == x) {
    // printf("//// parent[x] == x ////\n");
    return x;
  }

  // printf("//// parent[x] != x ////\n");
  // printf("//// parent[x] = root(parent[x]); ////\n");
  return parent[x] = root(parent[x]);
}

int same(int x, int y) {
  return root(x) == root(y);
}

void unite(int x, int y) {
  // printf("unite(%d, %d)\n", x, y);

  // rep(i, N) {
  //   printf("parent[%d]: ", i);
  //   printf("%d\n", parent[i]);
  // }

  // printf("root(%d): \n", x);
  x = root(x);
  // printf("x...%d\n", x);

  // rep(i, N) {
  //   printf("parent[%d]: ", i);
  //   printf("%d\n", parent[i]);
  // }

  // printf("root(%d): \n", y);
  y = root(y);
  // printf("y...%d\n", y);

  // rep(i, N) {
  //   printf("parent[%d]: ", i);
  //   printf("%d\n", parent[i]);
  // }

  if (x == y) {
    // printf("//// x == y ////\n");
    // printf("\n");
    return;
  }

  // printf("//// x != y ////\n");
  // printf("//// parent[x] = y; ////\n");
  parent[x] = y;
  // rep(i, N) {
  //   printf("parent[%d]: ", i);
  //   printf("%d\n", parent[i]);
  // }
  // printf("\n");
}

/**
 *
 * e.g.
 *
 * 5 4
 * 0 0 1
 * 0 2 3
 * 0 0 2
 * 1 0 3
 *
 * Yes
 *
 */
int main() {
  int Q;
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
