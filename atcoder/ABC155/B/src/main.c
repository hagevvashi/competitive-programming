#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(type, a, b) { type temp = a; a = b; b = temp; }

int n;

int main() {
  scanf("%d",&n);
  int flg=1;
  rep(i,n){
    int a;
    scanf("%d",&a);
    if(a%2==0){
      if(a%3==0||a%5==0){}else{
        flg=0;
      }
    }
  }
  if(flg)puts("APPROVED");
  else puts("DENIED");
  return 0;
}
