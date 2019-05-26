#include <stdio.h>

int main() {
  int times, diff, init, iteration_init;
  scanf("%d %d %d", &times, &diff, &init);

  iteration_init = init;
  for (short i = 0; i < 10; i += 1) {
    iteration_init = (iteration_init * times) - diff;
    printf("%d\n", iteration_init);
  }

  return 0;
}
