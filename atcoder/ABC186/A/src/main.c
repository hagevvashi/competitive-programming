#include <stdio.h>
#include <stdlib.h>

#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define rep(i, n, type) for (type i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(a, b, type) { type temp = a; a = b; b = temp; }

int main() {
  int n,w;
  scanf("%d%d",&n,&w);
  printf("%d\n",n/w);
  return 0;
}
