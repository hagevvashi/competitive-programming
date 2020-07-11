#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807

int compare(const void * a, const void * b) {
  return * (int *)b - * (int *)a;
}

int main() {

  int N, A[MAX] = {0};

  scanf("%d", &N);

  rep(i, N) {
    scanf("%d", A + i);
  }

  qsort(A, MAX, sizeof(int), compare);

  rep(i, N) {
    printf("%d\n", A[i]);
  }

  return 0;
}
