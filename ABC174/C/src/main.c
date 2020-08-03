#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807
#define array(N, t) (t*)calloc(N, sizeof(t))

int main() {
  int K;
  scanf("%d", &K);

  if (K % 2 == 0) {
    printf("-1\n");
    return 0;
  }

  long long i = 0;
  long long int seven = 7;
  long long int seven_plus = 7;
  while(seven % K != 0) {
    i += 1;
    seven = seven + (seven_plus * (i * 10)); // 7 + 70 = 77, 77 + 700 = 777
    printf("seven: %lld\n", seven);
    printf("i: %lld\n", i);
  }
  return 0;
}
