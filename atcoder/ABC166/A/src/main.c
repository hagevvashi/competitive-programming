#include <stdio.h>
#include <string.h>

int main() {
  char input[4];
  scanf("%s", input);

  char output[4] = "ABC";
  if (strcmp(input, "ABC") == 0) {
    strcpy(output, "ARC");
  }

  printf("%s", output);
  printf("%c", '\n');
  return 0;
}
