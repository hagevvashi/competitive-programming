#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(type, a, b) { type temp = a; a = b; b = temp; }

int C(int x) {
  if (x < 2) return 0;
  // return (x * (x - 1)) / 2;
  return x - 1;
}

int calc(char * S) {
  int l = strlen(S);
  // printf("l: %d\n", l);
  int x = 0;
  int r = 0;
  rep(i, l) {
    // printf("S[i]: %c\n", S[i]);
    if (S[i] == '#') {
      // printf("C(%d): %d\n", x, C(x));
      r += C(x);
      x = 0;
    } else {
      x += 1;
    }
  }
  r += C(x);
  return r;
}

/**
 * 自身と上下左右の隣接マスのどこか、2マスとも、散らかっていなければ布団が敷ける
 * 問: 布団を敷くパターンは何個あるか
 */
int main() {

  int H,W;

  char S[105][105];

  scanf("%d%d", &H,&W);

  rep(i, H) scanf("%s", S[i]);

  int ans = 0;
  rep(i, H) {
    // printf("calc(%s): %d\n", S[i], calc(S[i]));
    ans += calc(S[i]);
  }

  // printf("途中 ans: %d\n", ans);

  rep(i, W) {
    char T[105];
    rep(j, H) {
      T[j] = S[j][i];
    }
    T[H] = '\0';
    // printf("途中 T(w: %d): %s\n",i,T);
    // printf("途中 calc(T): %d\n", calc(T));
    ans += calc(T);
  }

  printf("%d\n", ans);

  return 0;
}
