#include <stdio.h>

int main() {
  short radius;
  float circumference;
  const float pi = 3.14159265358979;
  scanf("%hd", &radius);

  circumference = radius * 2 * pi;

  printf("%f", circumference);

  return 0;
}
