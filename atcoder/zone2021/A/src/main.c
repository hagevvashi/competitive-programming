#include <stdio.h>
#include <stdlib.h>

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

int main() {
  char s[13];
  scanf("%s",s);
  int cnt=0;
  rep(i,12){
    if(i>=9){
      break;
    }
    if(s[i]=='Z'){
      if(s[i+1]=='O'){
        if(s[i+2]=='N'){
          if(s[i+3]=='e'){
            cnt+=1;
          }
        }
      }
    }
  }
  printf("%d\n",cnt);
  return 0;
}
