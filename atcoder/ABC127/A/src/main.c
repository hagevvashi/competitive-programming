#include <stdio.h>

int main() {
  short age, original_price, final_price = 0;
  scanf("%hd %hd", &age, &original_price);

  if (age >= 13) {
    final_price = original_price;
  } else {
    if (age >= 6) {
      final_price = original_price / 2;
    }
  }

  printf("%hd\n", final_price);

  return 0;
}
