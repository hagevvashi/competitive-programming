#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(type, a, b) { type temp = a; a = b; b = temp; }

int main() {
  char S[1010];
  scanf("%s", S);

  int cnt = 0;
  rep(i, 1010) {
    if (S[i] == '\0') {
      cnt = i;
      break;
    }
  }



  if (S[cnt - 1] == 's') {
    S[cnt] = 'e';
    S[cnt + 1] = 's';
    S[cnt + 2] = '\0';
  } else {
    S[cnt] = 's';
    S[cnt + 1] = '\0';
  }

  puts(S);

  return 0;
}
