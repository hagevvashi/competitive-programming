#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807

int asc(const void * a, const void * b) {
  // printf("a: %d\n", *(int *)a);
  // printf("b: %d\n", *(int *)b);
  return *(int *)a - *(int *)b;
}

int main() {
  int n, k;
  scanf("%d%d", &n, &k);

  int p[n];
  rep(i, n) {
    scanf("%d", p + i);
  }

  qsort(p, n, sizeof(int), asc);

  /* rep(i, n) { */
  /*   printf("i: %d\n", i); */
  /*   printf("p[i]: %d\n", p[i]); */
  /* } */

  int ans = 0;
  rep(i, k) {
    ans += p[i];
  }

  printf("%d\n", ans);

  return 0;
}
