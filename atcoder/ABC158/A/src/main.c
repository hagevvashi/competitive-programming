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
  char S[4];
  scanf("%s", S);

  int ac = 0;
  int bc = 0;
  rep(i, 3) {
    if (S[i] == 'A') { ac += 1; }
    if (S[i] == 'B') { bc += 1; }
  }

  if (ac == 0) {
    puts("No");
    return 0;
  }
  if (bc == 0) {
    puts("No");
    return 0;
  }

  puts("Yes");
  return 0;
}
