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
  int n,m;
  scanf("%d%d",&n,&m);
  int a[m],b[m];
  rep(i,m){
    scanf("%d%d",a+i,b+i);
  }
  int k;
  scanf("%d",&k);
  int c[k],d[k];
  rep(i,k){
    scanf("%d%d",c+i,d+i);
  }

  int k2=1<<k; // 2^k
  int ans=0;
  rep(s,k2){
    int dish[n+1];
    rep(i,n+2)dish[i]=0;
    rep(i,k){
      if((s>>i)&1)dish[d[i]]+=1;
      else dish[c[i]]+=1;
    }
    int now=0;
    rep(i,m){
      if(dish[a[i]]==0)continue;
      if(dish[b[i]]==0)continue;
      now+=1;
    }
    ans=max(ans,now);
  }
  printf("%d\n",ans);
  return 0;
}
