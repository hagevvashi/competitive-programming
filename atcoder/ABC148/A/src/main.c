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
  int num;
  int flg;
} Ans;

int main() {
  Ans ans_list[3];
  rep(i,3){
    ans_list[i].num=i+1;
    ans_list[i].flg=0;
  }

  int a,b;
  scanf("%d%d",&a,&b);

  rep(i,3){
    if(ans_list[i].num==a || ans_list[i].num == b){
      ans_list[i].flg=1;
    }
  }

  int ans;
  rep(i,3){
    if(ans_list[i].flg==0){
      ans=ans_list[i].num;
    }
  }

  printf("%d\n",ans);

  return 0;
}
