#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))

int N;
int * data;
int * parent;
int * rank;

void init() {
  parent = array(N, int);
  rank = array(N, int);
  // child: parent's index
  // root: -size
  data = array(N, int);

  rep(i, N) {
    // at first, all data is root and size is -1
    data[i] = -1;
    parent[i] = i;
    rank[i] = 0;
  }
}

int find(int x) {
  if (data[x] < 0) {
    return x;
  }

  return data[x] = find(data[x]);
}

int root(int x) {
  if (parent[x] == x) {
    return x;
  }

  return parent[x] = root(parent[x]);
}

int same(int x, int y) {
  return root(x) == root(y);
}

int join(int x, int y) {
  x = find(x);
  y = find(y);
  if (x == y) {
    return 0;
  }
  return 1;
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

int size(int x) {
  return rank[root(x)];
}

int main() {
  int M;
  scanf("%d%d", &N, &M);

  init();

  rep(i, M) {
    int A, B;
    scanf("%d%d", &A, &B);
    A -= 1;
    B -= 1;
    unite(A, B);
  }

  int ans = 0;
  rep(i, N) {
    ans = max(ans, size(i));
  }

  printf("%d\n", ans);

  free(parent);
  free(rank);

  return 0;
}
