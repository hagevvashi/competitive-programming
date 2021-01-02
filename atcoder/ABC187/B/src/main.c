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

int x[1010];
int y[1010];
int ans=0;

void recursive_comb(int *indexes, int s, int rest) {
  if (rest == 0) {
    int i=indexes[0];
    int j=indexes[1];
    /* printf("i,j: %d,%d\n",i,j); */
    /* printf("x[j]-x[i]: %d\n", x[j]-x[i]); */
    if(abs(x[j]-x[i])>=abs(y[j]-y[i])){
      ans+=1;
    }
  } else {
    if (s < 0) return;
    recursive_comb(indexes, s - 1, rest);
    indexes[rest - 1] = s;
    recursive_comb(indexes, s - 1, rest - 1);
  }
}

// nCkの組み合わせに対して処理を実行する
void foreach_comb(int n, int k) {
  int indexes[k];
  recursive_comb(indexes, n - 1, k);
}

int main() {
  int n;
  scanf("%d",&n);

  rep(i,n){
    scanf("%d%d",x+i,y+i);
  }

  foreach_comb(n,2);
  printf("%d\n",ans);
  return 0;
}
