#include <stdio.h>
#include <math.h>


#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807

int main() {
  int a;
  scanf("%d", &a);

  int output = a + (int)pow(a, 2) + (int)pow(a, 3);

  printf("%d\n", output);
  return 0;
}
