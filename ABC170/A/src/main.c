#include <stdio.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807

int main() {
  long long X[5];
  rep(i, 5) {
    scanf("%lld", X + i);
  }

  short output = 0;
  rep(i, 5) {
    if (X[i] == 0) {
      output = i + 1;
      break;
    }
  }

  printf("%hd\n", output);
  return 0;
}
