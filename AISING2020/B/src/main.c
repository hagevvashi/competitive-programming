#include <stdio.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807

int main() {
  int N, a[105];

  scanf("%d", &N);

  rep(i, N) {
    scanf("%d", a + i);
  }

  int ans = 0;

  rep(i, N) {
    // 偶数判定
    if ((i + 1) % 2 == 0) {
      continue;
    }
    if (a[i] % 2 == 0) {
      continue;
    }
    ans += 1;
  }

  printf("%d\n", ans);

  return 0;
}
