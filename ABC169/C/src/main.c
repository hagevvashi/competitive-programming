#include <stdio.h>

#define rep(i, n) for(int i=0; i<(n); ++i)
#define max  100001

void debug(char * string, long int target) {
  printf("%s", string);
  printf("%ld", target);
  printf("%c", '\n');
}

int main() {
  double A;
  double B;

  scanf("%lf%lf", &A, &B);

  double ans = A * B;

  printf("%ld\n", (long)ans);

  return 0;
}
