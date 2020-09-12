#include <stdio.h>
#include <stdlib.h>

int asc(const void *lhs, const void *rhs) {
  return *(int *)lhs - *(int *)rhs;
}

int main() {
  int sunuke_count;
  int sweets_kind_count;
  scanf("%d %d", &sunuke_count, &sweets_kind_count);

  int has_sweets_count[sweets_kind_count];
  int sweets_kind = 0;

  int sunuke_array[9999];

  int i = 0;
  while (sweets_kind < sweets_kind_count) {
    scanf("%d", has_sweets_count + sweets_kind);
    for (int j = 0; j < has_sweets_count[sweets_kind]; j += 1) {
      scanf("%d", sunuke_array + i);
      i += 1;
    }
    sweets_kind += 1;
  }
  qsort(sunuke_array, i, sizeof(*sunuke_array), asc);

  int sunuke_genuine_count = 0;
  for (short k = 0; k < i; k += 1) {
    if (sunuke_array[k] != sunuke_array[k + 1]) {
      sunuke_genuine_count += 1;
    }
  }
  int output = sunuke_count - sunuke_genuine_count;
  printf("%d", output);
  printf("%c", '\n');
  return 0;
}
