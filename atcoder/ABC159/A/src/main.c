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
  int N, M;
  scanf("%d%d", &N, &M);

  int n_cnt = 0;
  if (N > 1) {
    n_cnt = (N * (N - 1)) / 2;
  }

  int m_cnt = 0;
  if (M > 1) {
    m_cnt = (M * (M - 1)) / 2;
  }

  printf("%d\n", n_cnt + m_cnt);
  return 0;
}
