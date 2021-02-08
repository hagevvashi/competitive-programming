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

int main() {
  int h,w;
  scanf("%d%d",&h,&w);
  char s[h][w+1];
  rep(i,h){
    scanf("%s",s[i]);
  }
  int ans=0;
  rep(i,h-1)rep(j,w-1){
    int cnt=0;
    rep(di,2)rep(dj,2){
      if(s[i+di][j+dj]=='#'){
        cnt+=1;
      }
    }
    if(cnt==1 || cnt==3){
      ans+=1;
    }
  }
  printf("%d\n",ans);
  return 0;
}
