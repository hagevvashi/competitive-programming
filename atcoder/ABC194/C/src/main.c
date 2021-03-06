#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define lrep(i, n) for (ll i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(a, b) { int temp = a; a = b; b = temp; }
#define lswap(a, b) { ll temp = a; a = b; b = temp; }

int a[1000000]={0};
ll ans=0;

ll cnt=0;

void recursive_comb(int *indexes, int s, int rest) {
  if (rest == 0) {
    int i=indexes[0];
    int j=indexes[1];
    ans+=pow(a[j]-a[i],2);
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
    scanf("%d",a+i);
  }

  foreach_comb(n,2);
  printf("%lld\n",ans);
  return 0;
}
