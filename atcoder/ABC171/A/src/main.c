#include <stdio.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807

int main() {
  char input;
  scanf("%c", &input);

  char UpperCase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char LowerCase[] = "abcdefghijklmnopqrstuvwxyz";

  rep(i, 26) {
    if (input == UpperCase[i]) {
      printf("%c\n", 'A');
      break;
    } else if (input == LowerCase[i]) {
      printf("%c\n", 'a');
      break;
    }
  }

  return 0;
}
