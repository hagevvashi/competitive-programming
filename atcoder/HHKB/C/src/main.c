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
  int N;
  scanf("%d", &N);

  int acc[200010] = {0};
  int ans = 0;
  rep(i, N) {
    int p;
    scanf("%d", &p);
    acc[p] += 1;
    while(acc[ans] != 0) {
      ans += 1;
    }
    printf("%d\n", ans);
  }
  return 0;
}
