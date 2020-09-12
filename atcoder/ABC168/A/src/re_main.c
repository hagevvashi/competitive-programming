#include <stdio.h>

int main() {
  short input;

  scanf("%hd", &input);

  switch(input % 10) {
    case 2:
    case 4:
    case 5:
    case 7:
    case 9:
      printf("%s", "hon\n");
      break;
    case 0:
    case 1:
    case 6:
    case 8:
      printf("%s", "pon\n");
      break;
    default:
      printf("%s", "bon\n");
      break;
  }

  return 0;
}
