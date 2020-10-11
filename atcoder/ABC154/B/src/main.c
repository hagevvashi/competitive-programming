#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(a, b, type) { type temp = a; a = b; b = temp; }

char S[110];

int sl(char * s) {
  int r = 0;
  while(s[r] != '\0') {
    r += 1;
  }
  return r;
}

int main() {
  scanf("%s",S);
  int h = sl(S);
  // printf("%d\n",h);
  rep(i, h) {
    S[i] = 'x';
  }
  puts(S);
  return 0;
}
