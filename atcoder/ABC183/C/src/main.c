#include <stdio.h>
#include <stdlib.h>

#define ll long long
#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(a, b, type) { type temp = a; a = b; b = temp; }

void reverse(int * a, int n) {
  int l = 0;
  int r = n - 1;
  while(l < r) {
    swap(a[l], a[r], int);
    l += 1;
    r -= 1;
  }
}

int next_permutation(int * p, int n) {
  int l = n - 2;
  int r = n - 1;
  int ret = 0;
  // while (--l >= 0 && a[l] >= a[l + 1]);
  while(l >= 0) {
    if (p[l] < p[l + 1]) {
      break;
    }
    l -= 1;
  }
  if (l >= 0) {
    ret = 1;
    while (l < r) {
      if (p[l] < p[r]) {
        break;
      }
      r -= 1;
    }
    swap(p[l], p[r], int);
  }
  reverse(p + (l + 1), n - (l + 1));
  return ret;
}

int main() {
  int n,k;
  int t[9][9];
  int idx[9];

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
      /**
       * n=7 の時
       *
       * i=5 の時は i+1=6
       *   -> (i+1)%n=6
       * i=6 の時は i+1=7
       *   -> (i+1)%n=0
      */
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
