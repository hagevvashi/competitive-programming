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
// int dp[50][10010]={0};
int * dp;
int v[50]={0},c[50]={0};
int main() {
  scanf("%d",&n);
  dp=array(n+1,int);
  rep(i,n){
    scanf("%d",v+i);
  }
  rep(i,n){
    scanf("%d",c+i);
  }
  // dp[i] // 前回までの X-Y の max
  rep(i,n+1){
    // printf("v[%d]: %d\n",i,v[i]);
    // printf("c[%d]: %d\n",i,c[i]);
    // printf("v[%d]-c[%d]: %d\n",i,i,v[i]-c[i]);
    dp[i+1]=max(dp[i]+(v[i]-c[i]),dp[i]);
    // printf("dp[%d]: %d\n",i+1,dp[i+1]);
  }
  // rep(i,n+1)printf("%d\n",dp[i]);
  printf("%d\n",dp[n]);
  free(dp);
  return 0;
}
