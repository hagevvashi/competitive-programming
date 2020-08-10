#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807
#define array(N, t) (t*)calloc(N, sizeof(t))

int main() {
  int X;
  int rating[] = {400,600,800,1000,1200,1400,1600,1800,2000};

  scanf("%d", &X);

  int ans = 8;
  rep(i, 8) {
    if (X >= rating[i]) {
      if (X < rating[i + 1]) {
        ans -= i;
        break;
      }
    }
  }

  printf("%d\n", ans);

  return 0;
}
