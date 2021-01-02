#include <stdio.h>
#include <stdlib.h>

#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define lrep(i, n) for (ll i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(a, b) { int temp = a; a = b; b = temp; }
#define lswap(a, b) { ll temp = a; a = b; b = temp; }

int s(int n){
  int r=0;
  int x=n;
  while(1){
    int number=x%10;
    r+=number;
    x/=10;
    if(x<1){
      break;
    }
  }
  return r;
}

int main() {
  int a,b;
  scanf("%d%d",&a,&b);
  if(s(a)>=s(b)){
    printf("%d\n",s(a));
  }else{
    printf("%d\n",s(b));
  }
  return 0;
}
