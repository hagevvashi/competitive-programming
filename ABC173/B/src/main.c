#include <stdio.h>
#include <string.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807

int main() {
  int N;

  scanf("%d", &N);

  int AC = 0;
  int WA = 0;
  int TLE = 0;
  int RE = 0;

  rep(i, N) {
    char input[4];
    scanf("%s", input);

    if (strcmp(input, "AC") == 0) {
      AC += 1;
    } else {
      if (strcmp(input, "WA") == 0) {
        WA += 1;
      } else {
        if (strcmp(input, "TLE") == 0) {
          TLE += 1;
        } else {
          if (strcmp(input, "RE") == 0) {
            RE += 1;
          }
        }
      }
    }
  }

  printf("AC x %d\n", AC);
  printf("WA x %d\n", WA);
  printf("TLE x %d\n", TLE);
  printf("RE x %d\n", RE);

  return 0;
}
