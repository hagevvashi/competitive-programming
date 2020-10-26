#include <stdio.h>
#include <stdlib.h>
// #include <math.h>

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(type, a, b) { type temp = a; a = b; b = temp; }

ll n;
ll t[30]={0};
ll f[30]={0};
ll aa=-1;
ll ba=-1;

ll pw(ll x,ll y){
  ll r=1;
  rep(i,y)r*=x;
  return r;
}

/* ll tf(){ */
/*   ll i=0; */
/*   while(n>=pw(3,i)){ */
/*     t[i]=pw(3,i); */
/*     i+=1; */
/*   } */
/*   return i; */
/* } */

/* ll ff(){ */
/*   ll i=0; */
/*   while(n>=pw(5,i)){ */
/*     f[i]=pw(5,i); */
/*     i+=1; */
/*   } */
/*   return i; */
/* } */

/* void solve(){ */
/*   ll a=tf(); */
/*   ll b=ff(); */

/*   rep(i,a){ */
/*     rep(j,b){ */
/*       /\* printf("t[%d]: %lld\n",i,t[i]); *\/ */
/*       /\* printf("f[%d]: %lld\n",j,f[j]); *\/ */
/*       if(n==t[i]+f[j]){ */
/*         aa=i; */
/*         ba=j; */
/*         return; */
/*       } */
/*     } */
/*   } */
/*   return; */
/* } */

void solve(){
  for(int a=1;a<38;a+=1){
    for(int b=1;b<26;b+=1){
      if(pw(3,a)+pw(5,b)==n){
        aa=a;
        ba=b;
        return;
      }
    }
  }
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

  /* ll foo=log(1000); */
  /* printf("foo: %lld\n", foo); */

  solve();
  if(aa>-1 && ba>-1){
    printf("%lld %lld\n",aa,ba);
  }else{
    puts("-1");
  }

  return 0;
}
