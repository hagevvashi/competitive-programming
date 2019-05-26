#include <stdio.h>

int main() {
  int card_count, operation_count;
  long original_sum = 0;
  scanf("%d %d", &card_count, &operation_count);
  int number_array[card_count];
  for (int i = 0; i < card_count; i += 1) {
    scanf("%d", &number_array[i]);
    original_sum += number_array[i];
  }

  int tmp;
  for (int i = 0; i < card_count; i += 1) {
    for (int j = i + 1; j < card_count; j += 1) {
      if (number_array[i] > number_array[j]) {
        tmp = number_array[i];
        number_array[i] = number_array[j];
        number_array[j] = tmp;
      }
    }
  }

  printf("\n# after sort\n");
  for (int i = 0; i < card_count; i += 1) {
    printf("%d, ", number_array[i]);
  }
  printf("\n");
  printf("# sort print end\n\n");

  long last_sum = original_sum;
  for (int i = 0; i < operation_count; i += 1) {
    int choice_count, modified_number;
    scanf("%d %d", &choice_count, &modified_number);

    long final_sum = 0;
    long tmp_sum = 0;
    for (int j = 0; j < card_count; j += 1) {
      if (j < choice_count) {
        tmp_sum += modified_number;
        final_sum = tmp_sum;
        printf("tmp_sum: %ld\n", tmp_sum);
      } else {
        final_sum += number_array[j];
        printf("final_sum: %ld\n", final_sum);
      }
    }
    printf("final_sum(after iteration): %ld\n", final_sum);
    if (final_sum > last_sum) {
      last_sum = final_sum;
    }
  }

  printf("%ld\n", last_sum);
  return 0;
}
