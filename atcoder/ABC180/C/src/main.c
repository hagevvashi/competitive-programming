#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define rep(i, n, type) for (type i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(type, a, b) { type temp = a; a = b; b = temp; }

int main() {
  ll N,i,x[1000000],n=0;

  scanf("%lld",&N);

  for(i=1;i<=sqrt(N);i++){
    if(N%i==0){
      printf("%lld\n",i);
      x[n]=N/i;
      n+=1;
    }
  }
  n-=1;

  if(N/x[n]==x[n]){
    n-=1;
  }

  for(i=n;i>=0;i-=1){
    printf("%lld\n",x[i]);
  }

  return 0;
}
