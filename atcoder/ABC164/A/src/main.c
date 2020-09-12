#include <stdio.h>
#include <string.h>

int main() {
  short sheep, wolf;
  char output[8];

  scanf("%hd %hd", &sheep, &wolf);

  if (sheep > wolf) {
    strcpy(output, "safe\n");
  } else {
    strcpy(output, "unsafe\n");
  }

  printf("%s", output);

  return 0;
}
