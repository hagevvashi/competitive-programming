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
  char c[4];
  scanf("%s",c);
  int flg=1;
  char prev=c[0];
  for(int i=1;i<=2;i+=1){
    if(c[i]==prev){
      prev=c[i];
    }else{
      flg=0;
      break;
    }
  }

  if(flg==1){
    puts("Won");
  }else{
    puts("Lost");
  }
  return 0;
}
