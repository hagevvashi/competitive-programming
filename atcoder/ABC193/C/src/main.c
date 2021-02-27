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

ll arr[1001000]={0};
int arr_i=0;

int dup(ll i){
  rep(j,arr_i){
    if(arr[j]==i)return 1;
  }
  return 0;
}

int main() {
  ll n;
  scanf("%lld",&n);
  ll ans=0;
  for(ll i=2;i*i<=n;i+=1){
    // 4とかはすでにa^bで表せるので、4の累乗は省く
    if(dup(i)==1){
      continue;
    }
    ll j=2;
    while(1){
      ll t=powl(i,j);
      if(t>n)break;
      // printf("%lld\n",t);
      arr[arr_i]=t;
      arr_i+=1;
      ans+=1;
      j+=1;
    }
  }
  printf("%lld\n",n-ans);
  return 0;
}
