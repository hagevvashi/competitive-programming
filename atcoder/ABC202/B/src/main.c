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
#define cswap(a, b) { char temp = a; a = b; b = temp; }

void reverse(char * a, int n) {
  int l = 0;
  int r = n - 1;
  while(l < r) {
    cswap(a[l], a[r]);
    l += 1;
    r -= 1;
  }
}

int main() {
  char s[100010];
  scanf("%s",s);
  int l=strlen(s);
  // printf("%d\n",l);
  // puts(s);
  reverse(s,l);
  // puts(s);
  rep(i,l){
    // printf("%c\n",s[i]);
    // if(s[i]=='0'){}
    // if(s[i]=='1'){}
    if(s[i]=='6'){
      // printf("%c\n",s[i]);
      s[i]='9';
      // printf("%c\n",s[i]);
    } else {
    // if(s[i]=='8'){}
      if(s[i]=='9'){
        s[i]='6';
      }
    }
  }
  puts(s);
  return 0;
}
