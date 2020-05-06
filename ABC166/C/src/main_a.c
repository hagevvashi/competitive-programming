#include <stdio.h>

const int MAX_TEMBODAI_NUMBER = 200010;

int main() {
  int tembodai_count, temboway_count;
  scanf("%d %d", &tembodai_count, &temboway_count);

  int height_array[tembodai_count];
  int max_height_array[tembodai_count];
  for (int i = 0; i < tembodai_count; i += 1) {
    scanf("%d", height_array + i);
    max_height_array[i] = 0;
  }

  int bad_tembodai[MAX_TEMBODAI_NUMBER];
  for (int i = 0; i < temboway_count; i += 1) {
    int tembodai_number_a, tembodai_number_b;
    scanf("%d %d", &tembodai_number_a, &tembodai_number_b);
    if (height_array[tembodai_number_a - 1] >= height_array[tembodai_number_b - 1]) {
      bad_tembodai[tembodai_number_b] += 1;
    }
    if (height_array[tembodai_number_a - 1] <= height_array[tembodai_number_b - 1]) {
      bad_tembodai[tembodai_number_a] += 1;
    }
  }

  int output = 0;
  for (int i = 1; i <= tembodai_count; i += 1) {
    if (bad_tembodai[i] == 0) {
      output += 1;
    }
  }
  printf("%d", output);

  return 0;
}
