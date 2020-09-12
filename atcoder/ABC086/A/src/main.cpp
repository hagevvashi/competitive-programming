#include <cstdio>

int main() {
  int first_input;
  int second_input;
  int result;
  int remainder_divided_in_2;
  // even or not
  bool is_even = true;
  // default output is "Odd"
  char output_arr[4] = "Odd";

  if (scanf("%d", &first_input) != 1) {
    return 1;
  }
  if (scanf("%d", &second_input) != 1) {
    return 1;
  }

  if (first_input < 1 || first_input > 10000) {
    return 1;
  }

  if (second_input < 1 || second_input > 10000) {
    return 1;
  }
  result = first_input * second_input;

  remainder_divided_in_2 = result % 2;
  // if result cannot be divide in 2, it must not be even
  if (remainder_divided_in_2 == 1) {
    is_even = false;
  }

  // if result can be divided in 2, out put is "Even"
  if (is_even == true) {
    output_arr[0] = 'E';
    output_arr[1] = 'v';
    output_arr[2] = 'e';
    output_arr[3] = 'n';
  }

  printf("%s\n", output_arr);

  return 0;
}
