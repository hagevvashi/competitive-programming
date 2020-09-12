#include <stdio.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define max  100001

void debug(char * string, long int target) {
  printf("%s", string);
  printf("%ld", target);
  printf("%c", '\n');
}

int main() {
  short A, B;
  scanf("%hd%hd", &A, &B);

  printf("%d", A * B);

  return 0;
}
