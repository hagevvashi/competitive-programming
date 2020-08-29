#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))

char S[1010], T[1010];

int solve() {
  int ans = 1e9;
  int slen = strlen(S);
  int tlen = strlen(T);

  int diff = slen - tlen;

  // printf("diff: %d\n", diff);
  if (diff == 0) {
    ans = 0;
    rep(i, slen) {
      if (S[i] != T[i]) {
        ans += 1;
      }
    }
  }

  rep(i, diff) {
    int cnt = 0;
    // printf("i: %d\n", i);
    rep(j, tlen) {
      int k = i + j;
      // printf("j: %d\n", j);
      // printf("k: %d\n", k);
      if (S[k] != T[j]) {
        cnt += 1;
      }
    }
    ans = min(ans, cnt);
  }
  return ans;
}

int main() {
  scanf("%s", S);
  scanf("%s", T);

  printf("%d\n", solve());

  return 0;
}
