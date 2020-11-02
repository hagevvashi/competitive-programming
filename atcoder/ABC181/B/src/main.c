#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(type, a, b) { type temp = a; a = b; b = temp; }



int solve1(int a,int b){
  int ans=0;
  for(int j=a;j<=b;j+=1){
    ans+=j;
  }
  return ans;
}

ll solve2(int a,int b){
  ll fpl=a+b;
  // printf("fpl:%lld\n",fpl);
  ll n=b-a+1;
  // printf("n:%lld\n",n);
  ll x=fpl*n;
  // printf("x:%lld\n",x);
  ll y=x/2;
  // printf("y:%lld\n",y);
  return y;
}

int main() {
  int n;
  scanf("%d",&n);
  ll ans=0;
  rep(i,n){
    int a,b;
    scanf("%d%d",&a,&b);
    // printf("ans:%lld\n",ans);
    ll z=solve2(a,b);
    // printf("z:%lld\n",z);
    ans=ans+z;
    // printf("ans:%lld\n",ans);
  }
  printf("%lld\n",ans);
  return 0;
}
