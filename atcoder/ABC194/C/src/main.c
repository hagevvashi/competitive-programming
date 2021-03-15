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

ll solve1(const int n){
  foreach_comb(n,2);
  return ans;
}

ll solve2(const int n) {
  const int MAX_A=200;
  int d[401]={0};

  rep(i,n){
    rep(j,i){
      int x=a[i]-a[j];
      ans+=x*x;
    }
    d[MAX_A+a[i]]+=1;
  }
  return ans;
}

ll solve3(const int n) {
  // \sum_{i=2}^{n}
  for(int i=2;i<=n;i+=1){
    // \sum_{j=1}^{i-1}
    for(int j=1;j<=i-1;j+=1){
      int x=a[i-1]+a[j-1];
      ans+=x*x;
    }
  }
  return ans;
}

int main() {
  int n;
  scanf("%d",&n);

  rep(i,n){
    scanf("%d",a+i);
  }

  // solve1(n);
  printf("%lld\n",solve2(n));
  return 0;
}
