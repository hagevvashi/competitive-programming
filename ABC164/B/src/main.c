#include <stdio.h>
#include <string.h>

/**
 * 先行は高橋くん
 *
 */
int main() {
  short takahashiRestPhysical, takahashiAttack, aokiRestPhysical, aokiAttack;
  char output[5];

  scanf("%hd %hd %hd %hd", &takahashiRestPhysical, &takahashiAttack, &aokiRestPhysical, &aokiAttack);

  // どっちかの体力が0以下になったら終わり（両方とも体力が1以上残っていたら継続）
  while (takahashiRestPhysical > 0 && aokiRestPhysical > 0) {
    // 高橋くんの攻撃
    aokiRestPhysical = aokiRestPhysical - takahashiAttack;
    // 高橋くんの勝ちパターン
    if (aokiRestPhysical <= 0) {
      strcpy(output, "Yes\n");
      break;
    }
    // 青木くんの攻撃
    takahashiRestPhysical = takahashiRestPhysical - aokiAttack;
    // 青木くんの勝ちパターン
    if (takahashiRestPhysical <= 0) {
      strcpy(output, "No\n");
      break;
    }
  }

  printf("%s", output);

  return 0;
}
