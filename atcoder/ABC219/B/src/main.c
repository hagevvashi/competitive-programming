#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ll long long
#define INF 2147483647
#define LINF ((1LL << 62) - (1LL << 31))
#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define lrep(i, n) for (ll i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(a, b) { int temp = a; a = b; b = temp; }
#define lswap(a, b) { ll temp = a; a = b; b = temp; }

char s[3][11];
char t[4];

int main() {
  scanf("%s",s[0]);
  scanf("%s",s[1]);
  scanf("%s",s[2]);
  scanf("%s",t);
  int tlen=strlen(t);
  // printf("tlen: %d\n",tlen);
  rep(i,tlen){
    // printf("i: %d\n", i);
    int index=t[i]-'0';
    index-=1;
    printf("%s",s[index]);
  }
  puts("");
  return 0;
}
