#include <stdio.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807

int main() {
  long long A;
  double B;
  scanf("%lld%lf", &A, &B);

  // printf("A: %lld\n", A);
  // printf("B: %lf\n", B);
  long long i_B = B * 100 + 0.5;
  // printf("i_B: %lld\n", i_B);
  // printf("A * i_B: %lld\n", A * i_B);
  // printf("A * i_B / 100: %lld\n\n", A * i_B / 100);

  printf("%lld\n", A * i_B / 100);
  return 0;
}
