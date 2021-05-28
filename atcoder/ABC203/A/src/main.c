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
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  if(a==b){
    printf("%d\n",c);
  }else{
    if(b==c){
      printf("%d\n",a);
    }else{
      if(c==a){
        printf("%d\n",b);
      }else{
        printf("%d\n",0);
      }
    }
  }
  return 0;
}
