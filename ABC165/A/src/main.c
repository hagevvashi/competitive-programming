#include <stdio.h>
#include <string.h>

int main() {
  short input_k, input_a, input_b;
  char output[3];

  scanf("%hd %hd %hd", &input_k, &input_a, &input_b);

  // A または B が K の倍数だった場合は問答無用で OK
  if (input_a % input_k == 0 || input_b % input_k == 0) {
    strcpy(output, "OK");
  } else if (input_a /* e.g. 11 */ - (input_a % input_k) /* e.g. 3 */ + input_k /* e.g. 4 */ <= input_b /* e.g. 15 */) {
    strcpy(output, "OK");
  } else {
    strcpy(output, "NG");
  }

  printf("%s", output);
  printf("%c", '\n');

  return 0;
}
