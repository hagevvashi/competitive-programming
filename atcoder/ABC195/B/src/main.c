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

int y[1000000]={0};
int yi=0;

int compare_int(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

void solve1(const int a, const int b, const int w){
  int W=w*1000;

  for(int i=1;i*i<=W;i+=1){
    if(W%i==0){
      y[yi]=i;
      yi+=1;
      y[yi]=W/i;
      yi+=1;
    }
  }
  qsort(y, yi, sizeof(int), compare_int);
  rep(i,yi){
    if (y[i] >= a && y[i]<= b) {
      printf("%d\n",y[i]);
    }
  }
}

int main() {
  int a,b,w;
  scanf("%d%d%d",&a,&b,&w);
  solve1(a,b,w);
  return 0;
}
