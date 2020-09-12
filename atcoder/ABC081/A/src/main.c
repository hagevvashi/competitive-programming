#include <stdio.h>
#include <string.h>

int main() {
  int re_scanf;
  char input[4];
  int output = 0;

  re_scanf = scanf("%s", input);
  if (re_scanf == 0) {
    return 1;
  }

  for (int i = 0; i < 3; ++i) {
    if (input[i] == '1') {
      output += 1;
    } else if (input[i] == '0') {
      ;
    } else {
      return 1;
    }
  }

  /* if (strcmp(input, "000") == 0) { */
  /*   output = 0; */
  /* } else if (strcmp(input, "100") == 0 || strcmp(input, "010") == 0 || strcmp(input, "001") == 0) { */
  /*   output = 1; */
  /* } else if (strcmp(input, "110") == 0 || strcmp(input, "101") ==0 || strcmp(input, "011") == 0) { */
  /*   output = 2; */
  /* } else if (strcmp(input, "111") == 0) { */
  /*   output = 3; */
  /* } else { */
  /*   return 1; */
  /* } */

  printf("%d\n", output);

  return 0;
}
