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

int judge_overflow(long long * result, long long a, long long b, long long(* calc)(const long long x, const long long y)) {
  *result = calc(a, b);
  if (a > 0 && b > 0 && *result < 0) {
    return -1;
  }
  if (a < 0 && b < 0 && *result > 0) {
    return -1;
  }
  return 0;
}

long long multiple(long long y, long long x) {
  return x * y;
};

int multiple_overflow(long long * result, long long a, long long b) {
  return judge_overflow(result, a, b, multiple);
}

long long pw(int a, int b) {
  long long * res = (long long *)malloc(sizeof(long long));
  *res = 1;
  for (int i = 0; i < b; i += 1) {
    int r = multiple_overflow(res, *res, a);
    if (r == -1) {
      return -1;
    }
  }
  return * res;
  free(res);
}

void solve(){
  int am=0,bm=0;
  while(pw(3,am)!=-1)am+=1;
  while(pw(5,bm)!=-1)bm+=1;

  int tam=0;
  rep(i,am){
    if(pw(3,i)>1000000000000000000){
      tam=i;
      break;
    }
  }
  int tbm=0;
  rep(i,bm){
    if(pw(5,i)>1000000000000000000){
      tbm=i;
      break;
    }
  }

  for(int a=1;a<tam;a+=1){
    for(int b=1;b<tbm;b+=1){
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
  solve();
  if(aa>-1 && ba>-1){
    printf("%lld %lld\n",aa,ba);
  }else{
    puts("-1");
  }

  return 0;
}
