#include <stdio.h>
#include <string.h>

#define rep(i, n) for(int i=0; i<(n); ++i)
#define max  100001

void debug(char * string, long int target) {
  printf("%s", string);
  printf("%ld", target);
  printf("%c", '\n');
}

int main() {
  short K, n;
  char S[max];

  scanf("%hd%s", &K, S);
  n = strlen(S);

  if (n <= K) {
    printf("%s", S);
  } else {
    rep(i, K) {
      printf("%c", S[i]);
    }
    printf("...");
  }

  return 0;
}
