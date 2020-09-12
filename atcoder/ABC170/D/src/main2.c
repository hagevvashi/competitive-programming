#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807

const int M = 1000005;

int main() {
  int N = 0;
  scanf("%d", &N);

  int A[N];
  rep(i, N) {
    scanf("%d", A + i);
  }

  int cnt[M] = {};
  rep(i, M) {
    int x = A[i];

    if (cnt[x] != 0) {
      cnt[x] = 2;
      continue;
    }

    for (int i = x; i < M; i += x) {
      cnt[i] += 1;
    }
  }

  int ans = 0;
  rep(i, M) {
    int x = A[i];
    if (cnt[x] == 1) {
      ans += 1;
    }
  }

  printf("%d\n", ans);
  return 0;
}
