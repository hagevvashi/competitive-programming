#include <stdio.h>

int main() {
  short N, M, Q;

  scanf("%hd %hd %hd", &N, &M, &Q);

  short A[N];

  // c[i] <= M - 1
  // A[N] <= M

  // 例
  A[0] = 1; // 1 <= x <= M
  A[1] = 3;
  A[2] = 4;

  short a[Q], b[Q], c[Q], d[Q];
  for (short i = 0; i < Q; i += 1) {
    scanf("%hd %hd %hd %hd", &a[i], &b[i], &c[i], &d[i]);
  }

  short amount_d = 0;

  for (short i = 0; i < Q; i += 1) {
    printf("%hd", a[i]);
    printf("%c", '\n');
    printf("%hd", b[i]);
    printf("%c", '\n');
    printf("%hd", c[i]);
    printf("%c", '\n');
    printf("%hd", d[i]);
    printf("%c", '\n');
    printf("%c", '\n');
    printf("%hd", A[b[i] - 1]);
    printf("%c", '\n');
    printf("%hd", A[a[i] - 1]);
    printf("%c", '\n');
    printf("%c", '\n');

    if (A[b[i] - 1] - A[a[i] - 1] == c[i]) {
      amount_d += d[i];
    }
  }

  printf("%hd", amount_d);
  printf("%c", '\n');
  return 0;
}
