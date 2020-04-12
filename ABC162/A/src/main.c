#include <stdio.h>
#include <string.h>

int main() {
  char input[4], output[4] = "No";
  scanf("%s", input);

  for (short i = 0; i < 4; i += 1) {
    if ('7' == input[i]) {
      strcpy(output, "Yes");
      break;
    }
  }

  printf("%s\n", output);

  return 0;
}
