#include <stdio.h>


int main() {
  int input;
  long output = 0;
  scanf("%d", &input);

  for (int i = 1; i <= input; i += 1) {
    // incase FizzBuzz
    if (i % 3 == 0 && i % 5 == 0) {
      continue;
    // incase Fizz
    } else if (i % 3 == 0) {
      continue;
    // incase Buzz
    } else if (i % 5 == 0) {
      continue;
    }
    output = output + i;
  }

  printf("%ld\n", output);
}
