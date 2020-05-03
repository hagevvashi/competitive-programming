#include <stdio.h>
#include <math.h>

int main() {
  long A, B, N;

  scanf("%ld %ld %ld", &A, &B, &N);

  int i = 0;
  int x = 1;
  int output[N];
  int max_value;

  while (x <= N) {
    output[i] = (floor(A * x / B)) - (B * floor(x / B));
    i += 1;
    x += 1;
  }

  max_value = output[0];
  for (int j = 0; j < N - 1; j += 1) {
    if (output[j] < output[j + 1]) {
      max_value = output[j + 1];
    }
  }

  printf("%d", max_value);
  return 0;
}
