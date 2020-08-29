#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))

int main() {
  int D, T, S;
  scanf("%d%d%d", &D, &T, &S);

  if (D > (T * S)) {
    printf("No\n");
  } else {
    printf("Yes\n");
  }

  return 0;
}
