#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int compareFunction(const void *lhs, const void *rhs) {
  // 昇順(char)
  return strcmp(lhs, rhs);
}

int main() {
  int amount;
  scanf("%d", &amount);

  char kind[amount][11];
  for (int i = 0; i < amount; i += 1) {
    scanf("%s", *(kind + i));
  }
  // ソートして同じ種類のものを固める
  qsort(kind, amount, sizeof(*kind), compareFunction);

  // 1つ目の種類に関しては絶対カウント1するので1から始める
  // 同じので固まっていても違うものが出てきて初めてインクリメントなのでこれでOK
  // たとえ全部同じでも1が正解だし
  int output = 1;

  // index + 1 との比較になるため、i < amount - 1 が条件
  for (int i = 0; i < amount - 1; i += 1) {
    // 並べ替え後の1つ目2つ目...を比較して違っていたらカウントをインクリメント
    if (strcmp(*(kind + i), *(kind + i + 1)) != 0) {
      output += 1;
    }
  }

  printf("%d", output);
  printf("%c", '\n');

  return 0;
}
