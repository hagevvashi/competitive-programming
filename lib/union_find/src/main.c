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
int * rank;

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

  if (rank[x] < rank[y]) {
    parent[x] = y;
  } else {
    parent[y] = x;
    if (rank[x] == rank[y]) {
      rank[x] += 1;
    }
  }
}

void init() {
  parent = array(N, int);
  rank = array(N, int);

  rep(i, N) {
    parent[i] = i;
    rank[i] = 0;
  }
}

int main() {
  scanf("%d", &N);

  // initialize
  init();

  int i= N - N;

  unite(i, i + 1);
  unite(i + 2, i + 3);
  unite(i, i + 2);

  if (same(i, i + 3)) {
    printf("same\n");
  } else {
    printf("not same\n");
  }

  free(parent);
  free(rank);

  return 0;
}
