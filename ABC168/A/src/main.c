#include <stdio.h>
#include <string.h>

int main() {
  char input[4];
  scanf("%s", input);

  char endChar;
  for (short i = 0; i < 4; i += 1) {
    if (input[i] == '\0') {
      break;
    }
    endChar = input[i];
  }

  char output[4];

  if (endChar == '2' || endChar == '4' || endChar == '5' || endChar == '7' || endChar == '9') {
    strcpy(output, "hon");
  } else if (endChar == '0' || endChar == '1' || endChar == '6' || endChar == '8') {
    strcpy(output, "pon");
  } else {
    strcpy(output, "bon");
  }

  printf("%s", output);

  return 0;
}
