#include <stdio.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807

int main() {
  int L, R, d;

  scanf("%d%d%d", &L, &R, &d);

  int ans = 0;
  for (int i = L; i <= R; i += 1) {
    if (i % d == 0) {
      ans += 1;
    }
  }

  printf("%d\n", ans);

  return 0;
}
