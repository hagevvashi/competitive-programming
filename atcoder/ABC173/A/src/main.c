#include <stdio.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807

int main() {
  int N;
  scanf("%d", &N);

  int amari = 0;
  int ans = 0;

  amari = N % 1000;

  if (amari != 0) {
    ans = 1000 - (N % 1000);
  }

  printf("%d\n", ans);

  return 0;
}
