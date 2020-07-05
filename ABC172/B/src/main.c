#include <stdio.h>
#include <string.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807

int main() {
  char S[200001] = "";
  char T[200001] = "";

  scanf("%s%s", S, T);

  int length = strlen(S);
  int count = 0;

  rep(i, length) {
    if (S[i] != T[i]) {
      count += 1;
    }
  }

  printf("%d\n", count);

  // printf("%s\n", S);
  // printf("%s\n", T);

  return 0;
}
