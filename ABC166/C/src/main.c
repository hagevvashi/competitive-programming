#include <stdio.h>
// #include <stdlib.h>

// const int MAX_TEMBODAI_NUMBER = 9999999;

typedef struct {
  int height;
  short is_good; // 0: 未定義, 1: 悪い展望台, 2: 良い展望台, 3: 引き分けなので保留
} Tembodai;

// 降順
/* static int compareFunction(const void *lhs, const void *rhs) { */
/*   return ((Tembodai *)rhs)->height - ((Tembodai *)lhs)->height; */
/* } */

/**
 *
 * 0 -> 1: Ao
 * 0 -> 2: Bo
 * 0 -> 3: Co
 * 1 -> 0: Dx
 * 1 -> 2: Ex
 * 1 -> 3: Fx
 * 2 -> 0: Gx
 * 2 -> 1: Ho
 * 2 -> 3: Io
 * 3 -> 0: Jx
 * 3 -> 1: Ko
 * 3 -> 2: Lx // これ要注意。引き分けは「一番」には含めない
 *
 */

int main() {
  int tembodai_count, temboway_count;
  scanf("%d %d", &tembodai_count, &temboway_count);

  Tembodai tembodai[tembodai_count];
  for (int i = 0; i < tembodai_count; i += 1) {
    scanf("%d", &tembodai[i].height);
    tembodai[i].is_good = 0;
  }
  // qsort(tembodai, tembodai_count, sizeof(*tembodai), compareFunction);

  for (int j = 0; j < temboway_count; j += 1) {
    int tembodai_number_a, tembodai_number_b;
    scanf("%d %d", &tembodai_number_a, &tembodai_number_b);

    int tembodai_index_a = tembodai_number_a - 1;
    int tembodai_index_b = tembodai_number_b - 1;

    /* printf("%c", '\n'); */
    /* printf("%s", "tembodai_index_a は "); */
    /* printf("%d", tembodai_index_a); */
    /* printf("%c", '\n'); */
    /* printf("%s", "tembodai_index_b は "); */
    /* printf("%d", tembodai_index_b); */
    /* printf("%c", '\n'); */

    if (tembodai[tembodai_index_a].height > tembodai[tembodai_index_b].height) {
      // A の方が高いケース
      if (tembodai[tembodai_index_a].is_good == 0/* || tembodai[tembodai_index_a].is_good == 3 */) {
        // A が未定義の展望台または保留中の展望台だった場合
        // A を良い展望台に変更
        // <B>
        tembodai[tembodai_index_a].is_good = 2;
      }
      if (tembodai[tembodai_index_b].is_good != 1) {
        // B が良い展望台または未定義の展望台または保留中の展望台だった場合
        // B を悪い展望台に変更
        // <A>, <H>, <K>
        tembodai[tembodai_index_b].is_good = 1;
      }
    } else if (tembodai[tembodai_index_a].height < tembodai[tembodai_index_b].height) {
      // B の方が高いケース
      if (tembodai[tembodai_index_b].is_good == 0/* || tembodai[tembodai_index_b].is_good == 3 */) {
        // B が未定義の展望台または保留中の展望台だった場合のみ
        // B を良い展望台に変更
        // <B>
        tembodai[tembodai_index_b].is_good = 2;
      }

      if (tembodai[tembodai_index_a].is_good != 1) {
        // A が良い展望台または未定義の展望台または保留中の展望台だった場合
        // A を悪い展望台に変更
        // <A>, <H>, <K>
        tembodai[tembodai_index_a].is_good = 1;
      }
    } else {
      // 高さが同じケース
      if (tembodai[tembodai_index_a].is_good == 0 || tembodai[tembodai_index_a].is_good == 2) {
        // A が未定義の展望台または良い展望台だった場合
        // A を保留中の展望台に変更
        // <C>, <I>
        tembodai[tembodai_index_a].is_good = 3;
      }
      if (tembodai[tembodai_index_b].is_good == 0 || tembodai[tembodai_index_b].is_good == 2) {
        // B が未定義の展望台または良い展望台だった場合
        // B を保留中の展望台に変更
        // <C>, <I>
        tembodai[tembodai_index_b].is_good = 3;
      }
    }

    /* printf("%c", '\n'); */
    /* printf("%s", "展望台 "); */
    /* printf("%d", tembodai_index_a); */
    /* printf("%s", " の評価は "); */
    /* printf("%hd", tembodai[tembodai_index_a].is_good); */
    /* printf("%c", '\n'); */
    /* printf("%s", "展望台 "); */
    /* printf("%d", tembodai_index_b); */
    /* printf("%s", " の評価は "); */
    /* printf("%hd", tembodai[tembodai_index_b].is_good); */
    /* printf("%c", '\n'); */
  }

  int output = 0;
  for (int k = 0; k < tembodai_count; k += 1) {
    /* printf("%c", '\n'); */
    /* printf("%s", "展望台 "); */
    /* printf("%d", k); */
    /* printf("%s", " の評価は "); */
    /* printf("%hd", tembodai[k].is_good); */
    /* printf("%c", '\n'); */

    if (tembodai[k].is_good == 0) {
      // 展望台k が未定義の展望台だった場合
      // 展望台k は「一本の道を使って辿り着ける展望台が存在しない場合」に該当するので
      // 展望台k を良い展望台に変更
      tembodai[k].is_good = 2;
    }
    // if (tembodai[k].is_good == 3) {
      // 展望台k が保留中の展望台だった場合
      // 展望台k は一本の道を使って辿り着ける自身より低い展望台が存在しないので
      // 展望台k を悪い展望台に変更
      // tembodai[k].is_good = 1;
    // }
    if (tembodai[k].is_good == 2) {
      output += 1;
    }
  }

  printf("%d", output);
  printf("%c", '\n');

  return 0;
}
