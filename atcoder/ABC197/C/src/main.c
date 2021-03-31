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

ll yaru(int*shikiri,ll*a,int n){
  // shikiri[0]=1 その他全部 0 のケース
  ll katamari[10010]={0};
  int katamari_i=0;
  for(int i=0;i<n;i+=1){
    katamari[katamari_i]|=a[i];
    if(shikiri[i]==1){
      katamari_i+=1;
    }
  }
  ll re=katamari[0];
  for(int i=1;i<=katamari_i;i+=1){
    re^=katamari[i];
  }
  return re;
}

int main() {
  int n;
  scanf("%d",&n);
  ll a[n];
  rep(i,n){
    scanf("%lld",a+i);
  }
  int shikiri[n-1];
  rep(i,n-1){
    shikiri[i]=0;
  }

  ll ans=LINF;
  // 仕切りn-1個
  // TODO: 何も仕切りがない状態は後で考える <- やらなくていい
  rep(i,n-1){
    // yaru??
    shikiri[i]=1;
    ans=min(ans,yaru(shikiri,a,n));
    for(int j=i;j<n-1;j+=1){
      shikiri[j]=1;
      ans=min(ans,yaru(shikiri,a,n));
    }
    rep(k,n-1){
      shikiri[k]=0;
    }
  }
  printf("%lld\n",ans);
  return 0;
}
