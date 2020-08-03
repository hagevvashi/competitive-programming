#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807
#define array(N, t) (t*)calloc(N, sizeof(t))

int main() {
  int N, D;

  scanf("%d%d", &N, &D);

  /* int hoge = -56855; */
  /* printf("\n"); */
  /* printf("hoge: %fd\n", pow(hoge, 2)); */

  int ans = 0;
  rep(i, N) {
    int X, Y;
    int input_X, input_Y;
    scanf("%d%d", &input_X, &input_Y);

    X = abs(input_X);
    Y = abs(input_Y);

    /* printf("\n"); */
    /* printf("abs(X): %d\n", abs(X)); */
    /* printf("abs(Y): %d\n", abs(Y)); */

    /* printf("D: %d\n", D); */

    if (D < X) {
      //      printf("larger\n");
      continue;
    }
    if (D < Y) {
      //      printf("larger\n");
      continue;
    }

    /* if ((int)(D / X) > X) { */
    /*   continue; */
    /* } */

    /* if ((int)(D / Y) > Y) { */
    /*   continue; */
    /* } */

    long long int pow_X = pow(X, 2);
    long long int pow_Y = pow(Y, 2);

    /* printf("\n"); */

    /* printf("X: %d\n", X); */
    /* printf("pow_X: %lld\n", pow_X); */
    /* printf("Y: %d\n", Y); */
    /* printf("pow_Y: %lld\n", pow_Y); */

    long long int pow_X_plus_pow_Y = pow_X + pow_Y;

    /* printf("pow_X_plus_pow_Y: %d\n", pow_X_plus_pow_Y); */

    long double tmp_distance = sqrt(pow_X_plus_pow_Y);

    /* printf("tmp_distance: %fd\n", tmp_distance); */

    long long int distance = (long long int)ceil(tmp_distance);

    /* printf("distance: %d\n", distance); */

    if (D >= distance) {
      ans += 1;
    }
  }

  printf("%d\n", ans);

  return 0;
}
