#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141592

int main() {
  short A, B, H, M;
  scanf("%hd%hd%hd%hd", &A, &B, &H, &M);

  // 所与の時間より基準分を求める
  // ただし短針はM/60だけ進んでいることを考慮に入れておく
  // 例えば6時だったら30分が基準分の考え方だが、6時15分の時、短針は6時から7時の間を1/4進んでいる
  // よって、(6 * 5) + (5 * 15 / 60)が基準分
  // この式は 5(H + M / 60)と評価し直せる
  long double base_minutes = ((long double)H + ((long double)M / 60)) * 5;

  /* printf("%s", "H * 5:"); */
  /* printf("%lf", H * 5); */
  /* printf("%c", '\n'); */

  /* printf("%s", "(M / 60):"); */
  /* printf("%lf", M / 60); */
  /* printf("%c", '\n'); */

  /* printf("%s", "5 * (M / 60):"); */
  /* printf("%lf", 5 * (M / 60)); */
  /* printf("%c", '\n'); */

  /* printf("%s", "base_minutes:"); */
  /* printf("%lf", base_minutes); */
  /* printf("%c", '\n'); */


  // 差分の分数を求める
  // 6時15分が所与だったら、15分 - 30.25分 = 15.25分（絶対値）となる
  long double diff_minutes = fabsl((long double)M - (long double)base_minutes);
  if (diff_minutes - 30 >= 0) {
    diff_minutes = diff_minutes - 30;
  }

  /* printf("%s", "diff_minutes:"); */
  /* printf("%lf", diff_minutes); */
  /* printf("%c", '\n'); */

  // 差分の分から角度を求める
  long double degree = diff_minutes * 6; // 1分辺りの角度が6度なので、差が15分だったら15*6で90度となる

  /* printf("%s", "degree:"); */
  /* printf("%lf", degree); */
  /* printf("%c", '\n'); */

  // 角度からラジアンを求める
  long double radian = degree * PI / 180.0;

  /* printf("%s", "A*A:"); */
  /* printf("%d", A*A); */
  /* printf("%c", '\n'); */

  /* printf("%s", "B*B:"); */
  /* printf("%d", B*B); */
  /* printf("%c", '\n'); */

  /* printf("%s", "2*A*B:"); */
  /* printf("%d", 2*A*B); */
  /* printf("%c", '\n'); */

  /* printf("%s", "cos(radian):"); */
  /* printf("%lf", cos(radian)); */
  /* printf("%c", '\n'); */

  /* printf("%s", "((2 * A * B) * cos(radian)):"); */
  /* printf("%lf", ((2 * A * B) * cos(radian))); */
  /* printf("%c", '\n'); */

  /* printf("%s", "sqrt(((2 * A * B) * cos(radian))):"); */
  /* printf("%lf", sqrt(((2 * A * B) * cos(radian)))); */
  /* printf("%c", '\n'); */

  // 余弦定理でAとBの長さから問われている辺の長さを求める
  long double output = sqrt((A * A) + (B * B) - ((2 * A * B) * cos(radian)));

  printf("%20.20Lf", output);
  printf("%c", '\n');

  return 0;
}
