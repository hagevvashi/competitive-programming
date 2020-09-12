#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807
#define array(N, t) (t*)calloc(N, sizeof(t))

int main() {
  int X;

  scanf("%d", &X);

  if (X >= 30) {
    printf("%s\n", "Yes");
  } else {
    printf("%s\n", "No");
  }

  return 0;
}
