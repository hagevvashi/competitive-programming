#include <stdio.h>

int main() {
  short input_int;
  char input_string[101];

  scanf("%hd", &input_int);
  scanf("%s", input_string);

  char output_string[104];
  short is_overflow = 0;

  for(short i = 0; i < input_int; i += 1) {
    output_string[i] = input_string[i];
    if (input_string[i] == '\0') {
      break;
    }

    if (i == input_int - 1) {
      if (input_string[i + 1] == '\0') {
        output_string[i + 1] = '\0';
      } else {
        is_overflow = 1;
      }
    }
  }

  if (is_overflow == 1) {
    output_string[input_int] = '.';
    output_string[input_int + 1] = '.';
    output_string[input_int + 2] = '.';
    output_string[input_int + 3] = '\0';
  }

  printf("%s", output_string);

  return 0;
}
