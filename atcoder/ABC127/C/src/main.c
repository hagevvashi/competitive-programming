#include <stdio.h>

int main() {
  int card_count, gate_count;
  scanf("%d %d", &card_count, &gate_count);

  int minimum_number = 0, max_number = 0;
  int final_count = 0;

  for (int i = 0; i < gate_count; i += 1) {
    int count_start_number, count_end_number;
    scanf("%d %d", &count_start_number, &count_end_number);

    if (i == 0) {
      max_number = count_end_number;
    }
    if (count_end_number < max_number) {
      max_number = count_end_number;
    }
    if (count_start_number > minimum_number) {
      minimum_number = count_start_number;
    }
  }

  if (max_number >= minimum_number) {
    final_count = max_number - minimum_number + 1;
  }
  printf("%d\n", final_count);

  return 0;
}
