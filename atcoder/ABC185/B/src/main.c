#include <stdio.h>
#include <stdlib.h>

#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(type, a, b) { type temp = a; a = b; b = temp; }

int main() {
  int n,m,t;
  scanf("%d%d%d",&n,&m,&t);
  int n_init=n;
  int a[m],b[m];
  rep(i,m) {
    scanf("%d",a+i);
    scanf("%d",b+i);
  }
  rep(i,m){
    if(i==0){
      n-=a[i];
      if(n<=0){
        break;
      }
      n+=b[i]-a[i];
      if(n>n_init){
        n=n_init;
      }
    }else{
      n-=a[i]-b[i-1];
      if(n<=0){
        break;
      }
      n+=b[i]-a[i];
      if(n>n_init){
        n=n_init;
      }
    }
    if(n<=0){
      break;
    }
  }
  if(n<=0){
    puts("No");
  }else{
    n-=(t-b[m-1]);
    if(n<=0){
      puts("No");
    } else {
      puts("Yes");
    }
  }
  return 0;
}
