#include <stdio.h>

char tolowr(char c);
char toupr(char c);

int main() {
  short a, b;
  scanf("%hd %hd\n", &a, &b);

  char c;
  char d[a + 1];
  for (int i = 0; i <= a; i += 1) {
    scanf("%c", &c);
    if (i != a) {
      if (c != 'A' || c != 'B' || c != 'C') {
        return 1;
      }
    }

    if (i + 1 == b) {
      d[i] = tolowr(c);
    } else {
      d[i] = c;
    }
  }

  printf("%s", d);

  return 0;
}

char tolowr(char c) {
  return (c + 0x20);
}

char toupr(char c) {
  return (c - 0x20);
}
