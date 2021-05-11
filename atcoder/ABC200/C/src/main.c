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

int main() {
  ll n;
  scanf("%lld",&n);
  ll a[n];
  rep(i,n)scanf("%lld",a+i);
  int cnt=0;
  rep(i,n){
    for(int j=i+1;j<n;j+=1){
      if((a[i]-a[j])%200==0){
        cnt+=1;
      }
    }
  }
  printf("%d\n",cnt);
  return 0;
}
