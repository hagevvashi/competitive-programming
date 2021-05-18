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

typedef struct {
  int T;
  int A;
} S;

int main() {
  int H,W;
  scanf("%d%d",&H,&W);
  char a[H][W+1];
  rep(i,H)scanf("%s",a[H]);
  int l=(H+W)-1;

  //init
  S dp[l];
  dp[0].A=0,dp[0].T=0;

  int h=0,w=0;
  for(int i=1;i<l;i+=1){
    if(i%2!=0){
      //Tのターン
      if(a[h+1][w]=='-'){
        
      }
    }else{
      //Aのターン
    }
  }
  return 0;
}
