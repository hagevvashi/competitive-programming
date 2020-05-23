#include <stdio.h>
#include <string.h>

int main() {
  char input_a[11];
  char input_b[12];
  scanf("%s%s", input_a, input_b);

  short length = strlen(input_a);

  char output[4] = "Yes";
  for (short i = 0; i < length; i += 1) {
    if (input_a[i] != input_b[i]) {
      strcpy(output, "No");
    }
  }

  printf("%s", output);
  printf("%c", '\n');

  return 0;
}
