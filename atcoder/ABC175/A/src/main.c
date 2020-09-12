#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807
#define array(N, t) (t*)calloc(N, sizeof(t))

int main() {
  char S[4];
  scanf("%s", S);

  int cnt = 0;
  int max = 0;
  int ans = 0;
  char prev_char = '0';
  rep(i, 3) {
    if (prev_char == 'R') {
      if (S[i] == 'R') {
        cnt += 1;
      } else {
        max = cnt;
        cnt = 0;
      }
    } else {
      if (S[i] == 'R') {
        cnt = 1;
      } else {
        cnt = 0;
      }
    }
    prev_char = S[i];
  }

  if (max > cnt) {
    ans = max;
  } else {
    ans = cnt;
  }

  printf("%d\n", ans);
  return 0;
}
