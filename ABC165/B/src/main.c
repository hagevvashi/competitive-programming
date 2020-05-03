#include <stdio.h>

int main() {
  unsigned long level_deposit, deposit = 100;
  short output_year = 0;

  scanf("%ld", &level_deposit);

  if (level_deposit < 101 || level_deposit > 1000000000000000000) {
    return 1;
  }

  while(deposit < level_deposit) {
    deposit = deposit + deposit / 100;
    output_year += 1;
  }

  printf("%hd", output_year);
  printf("%c", '\n');

  return 0;
}
