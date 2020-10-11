#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(type, a, b) { type temp = a; a = b; b = temp; }

char S[11], T[11];
int A,B;
char U[11];

int x(char * X) {
  int t = 1;
  rep(i, 11) {
    if (U[i] == '\0') {
      break;
    }
    if (U[i] != X[i]) {
      t = 0;
    }
  }
  return t;
}

int main() {
  scanf("%s%s", S, T);
  scanf("%d%d", &A, &B);
  scanf("%s", U);
  if (x(S)) {
    A -= 1;
  } else {
    if (x(T)) {
      B -= 1;
    } else {
      return 1;
    }
  }
  printf("%d %d\n", A, B);
  return 0;
}
