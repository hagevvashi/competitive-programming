#include <stdio.h>

/**
 *
 * 考え方
 * 与えられたKの中でA, Bに割ける分は全部割く
 * どうしても余った分をCに割く
 **/
int main() {
  int A /* 1と書かれたカードの枚数 */, B /* 0と書かれたカードの枚数 */, C /* -1と書かれたカードの枚数 */, K /* 取る枚数 */;
  scanf("%d%d%d%d", &A, &B, &C, &K);

  int output;
  int rest;
  if (A <= K) {
    output = 1 * A;
    rest = K - A;

    /* printf("%c", '\n'); */

    /* printf("%s", "rest: "); */
    /* printf("%d", rest); */
    /* printf("%c", '\n'); */
    /* printf("%s", "output: "); */
    /* printf("%d", output); */
    /* printf("%c", '\n'); */

    /* printf("%c", '\n'); */

    if (rest > 0) {
      if (B <= rest) {
        output = output + 0 * B;
        rest = rest - B;

        /* printf("%c", '\n'); */

        /* printf("%s", "rest: "); */
        /* printf("%d", rest); */
        /* printf("%c", '\n'); */
        /* printf("%s", "output: "); */
        /* printf("%d", output); */
        /* printf("%c", '\n'); */

        /* printf("%c", '\n'); */

        if (rest > 0) {
          /* printf("%c", '\n'); */
          /* printf("%s", "output: "); */
          /* printf("%d", output); */
          /* printf("%c", '\n'); */

          /* printf("%c", '\n'); */
          /* printf("%s", "-1 * rest: "); */
          /* printf("%d", -1 * rest); */
          /* printf("%c", '\n'); */

          output = output + (-1 * rest);

          /* printf("%c", '\n'); */

          /* printf("%s", "rest: "); */
          /* printf("%d", rest); */
          /* printf("%c", '\n'); */
          /* printf("%s", "output: "); */
          /* printf("%d", output); */
          /* printf("%c", '\n'); */

          /* printf("%c", '\n'); */

        }
      } else {
      }
    } else {}
  } else {
    output = 1 * K;
  }

  printf("%d", output);
  printf("%c", '\n');

  return 0;
}
