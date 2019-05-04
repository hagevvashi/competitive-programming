#include <stdio.h>

int main() {
  /*
  char hoge[4];
  hoge[0] = 'h';
  hoge[1] = 'o';
  hoge[2] = 'g';
  hoge[3] = 'e';
  */

  char hoge[] = "hoge";
  puts(&hoge[5]);
  printf("%d\n", sizeof(hoge));

  return 0;
}
