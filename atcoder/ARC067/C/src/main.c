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
#define MOD 1000000007LL

int n;
ll ans = 1;

typedef struct {
  int body;
  ll shisu;
} Prime;

Prime prime_list[1010]={{0,0}};
int cnt=0;

void h(int x){
  prime_list[cnt].body=x;
  prime_list[cnt].shisu+=1;
  cnt+=1;
}

void g(int x){
  if(cnt==0){
    return h(x);
  }
  for(int i=cnt-1;i>=0;i-=1){
    if(prime_list[i].body==x){
      prime_list[i].shisu+=1;
      return;
    }
  }
  h(x);
}

void f(int x){
  for(int i=2;i*i<=x;i+=1){
    if(x%i==0){
      g(i);
      return f(x/i);
    }
  }
  g(x);
}

void solve(){
  for(int i=2;i<=n;i+=1){
    f(i);
  }
  rep(i,cnt){
    /* printf("body: %d\n",prime_list[i].body); */
    /* printf("shisu: %lld\n",prime_list[i].shisu); */
    ans*=(prime_list[i].shisu+1);
    ans%=MOD;
  }
}

void print(){
  printf("%lld\n",ans);
}

int main() {
  scanf("%d",&n);
  solve();
  print();
  return 0;
}
