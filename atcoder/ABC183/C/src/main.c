#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(type, a, b) { type temp = a; a = b; b = temp; }

/**
 * 0-12までの階上を持っている配列
 */
int factorial[13] = {
  0,
  1,
  2,
  6,
  24,
  120,
  720,
  5040,
  40320,
  362880,
  3628800,
  39916800,
  479001600/*,
  6227020800
  */
};

/**
  // 長さ固定の場合
  t[0][1]+t[1][2]+t[2][3]+t[3][0];
  t[0][1]+t[1][3]+t[3][2]+t[2][0];
  t[0][2]+t[2][1]+t[1][3]+t[3][0];
  t[0][2]+t[2][3]+t[3][1]+t[1][0];
  t[0][3]+t[3][1]+t[1][2]+t[2][0];
  t[0][3]+t[3][2]+t[2][1]+t[1][0];

  for(int i=1;i<4;i+=1){
    for(int j=1;j<4;j+=1){
      if(i==j)continue;
      for(int k=1;k<4;k+=1){
        if(i==k)continue;
        if(j==k)continue;
        db[dbi]=t[0][i]+t[i][j]+t[j][k]+t[k][0];
        dbi+=1;
      }
    }
  }

  int ans=0;
  rep(i,dbi){
    if(db[i]==k)ans+=1;
  }
 */

/**
 * @funtion next_permutation
 * @param {int} a
 * @param {int} cnt
 * @return int
 */
int next_permutation(int * a, int cnt) {
  int l = cnt - 1, r = cnt - 1;
  int ret = 0;
  int t;
  while (--l >= 0 && a[l] >= a[l + 1]);
  if (l >= 0) {
    ret = 1;
    while (a[l] >= a[r]) {
      r -= 1;
    }
    t = a[l];
    a[l] = a[r];
    a[r] = t;
  }
  for (l += 1, r = cnt - 1; l < r; l += 1, r -= 1) {
    t = a[l], a[l] = a[r], a[r] = t;
  }
  return ret;
}

int n,k;
int t[9][9];
int idx[9];
// int db[5040]={0};
// int dbi=0;

int main() {
  scanf("%d%d",&n,&k);
  rep(i,n)rep(j,n){
    scanf("%d",&t[i][j]);
  }

  rep(i, n) {
    idx[i] = i;
  }

  int ans=0;
  do {
    int time = 0;
    rep(i, n) {
      int a = idx[i];
      int b = idx[(i + 1) % n];
      time += t[a][b];
    }
    if (time == k) {
      ans += 1;
    }
  } while (next_permutation(idx + 1, n - 1));


  // 標準入力できたか確認
  /* rep(i,n)rep(j,n){ */
  /*   printf("%d\n",t[i][j]); */
  /* } */

  printf("%d\n",ans);
  return 0;
}
