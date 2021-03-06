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
  int X;
  scanf("%d", &X);

  int five_hundred_max = X / 500;
  int mod_five_hundred = X % 500;
  int five_max = mod_five_hundred / 5;

  printf("%d\n", (five_hundred_max * 1000) + (five_max * 5));

  return 0;
}
