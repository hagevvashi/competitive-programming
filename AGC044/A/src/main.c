#include <stdio.h>

void debug(char * string, long int target) {
  printf("%s", string);
  printf("%ld", target);
  printf("%c", '\n');
}

long int calc(long int N, int A, int B, int C, int D) {
  debug("N: ", N);
  debug("A: ", A);
  debug("B: ", B);
  debug("C: ", C);
  debug("D: ", D);

  long int X = 0;
  long int ans = 0;

  X += 1;
  ans += D;

  while (X < N) {
    X *= 5;
    ans += C;
  }
  debug("5倍したときのans: ", ans);
  debug("X: ", X);
  if (X == N) {
    return ans;
  }
  X /= 5;
  ans -= C;

  while (X < N) {
    X *= 3;
    ans += B;
  }
  debug("3倍したときのans: ", ans);
  debug("X: ", X);
  if (X == N) {
    return ans;
  }
  X = X / 3;
  ans -= B;

  while (X < N) {
    X *= 2;
    ans += A;
  }
  debug("2倍したときのans: ", ans);
  debug("X: ", X);
  if (X == N) {
    return ans;
  }
  X /= 2;
  ans -= A;

  // ここから下が問題
  while (X < N) {
    X += 1;
    ans += D;
  }
  debug("+1したときのans: ", ans);
  debug("X: ", X);
  X -= 1;
  ans -= D;

  return ans;

  // in case N = 11, A = 1, B = 2, C = 4, D = 8

  // 最安
  // X = X + 1; // X: 1 => D: 8
  // X = X * 2; // X: 2 => A: 1
  // X = X * 2; // X: 4 => A: 1
  // X = X * 3; // X: 12 => B: 2
  // X = X - 1; // X: 11 => D: 8
  // => 8 + 1 + 1 + 2 + 8
  // return 20;
}

int main() {
  short T;
  scanf("%hd", &T);

  // int A[T], B[T], C[T], D[T];
  // long int N[T], X = 0;
  long int ans[T];

  for (short i = 0; i < T; i += 1) {
    int A, B, C, D;
    long int N;

    scanf("%ld", &N);
    scanf("%d%d%d%d", &A, &B, &C, &D);

    ans[i] = calc(N, A, B, C, D);
  };

  for (short i = 0; i < T; i += 1) {
    printf("%ld", ans[i]);
    printf("%c", '\n');
  }

  return 0;
}
