#include <stdio.h>
#include <stdlib.h>

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(type, a, b) { type temp = a; a = b; b = temp; }

ll n;
ll t[200100]={0};
ll f[200100]={0};
ll aa=-1;
ll ba=-1;

ll pw(ll a,ll b){
  ll x=1;
  rep(i,b)x*=a;
  return x;
}

ll tf(){
  ll i=0;
  while(n>=pw(3,i)){
    t[i]=pw(3,i);
    i+=1;
  }
  return i;
}

ll ff(){
  ll i=0;
  while(n>=pw(5,i)){
    f[i]=pw(5,i);
    i+=1;
  }
  return i;
}

void solve(){
  ll a=tf();
  ll b=ff();

  rep(i,a){
    rep(j,b){
      /* printf("t[%d]: %lld\n",i,t[i]); */
      /* printf("f[%d]: %lld\n",j,f[j]); */
      if(n==t[i]+f[j]){
        aa=i;
        ba=j;
        return;
      }
    }
  }
  return;
}

int main() {
  scanf("%lld",&n);
  /* ll x=n/5; */
  /* printf("x: %lld\n",x); */
  /* ll y=x*5; */
  /* printf("y: %lld\n",y); */
  /* ll b=0; */
  /* ll p=1; */
  /* while(p<=y){ */
  /*   rep(i,b){ */
  /*     p*=5; */
  /*   } */
  /*   b+=1; */
  /* } */
  /* b-=1; */
  /* p/=5; */
  /* printf("b: %lld\n",b); */
  /* printf("p: %lld\n",p); */
  solve();
  if(aa>-1 && ba>-1){
    printf("%lld %lld\n",aa,ba);
  }else{
    puts("-1");
  }
  return 0;
}
