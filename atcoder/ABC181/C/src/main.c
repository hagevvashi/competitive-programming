#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(type, a, b) { type temp = a; a = b; b = temp; }

int n;
int x[110]={0},y[110]={0};

int solve(){
  rep(i,n){
    for(int j=i;j<n;j+=1){
      if(i==j)continue;
      printf("i:%d,j%d\n",i,j);
      int a1=abs(x[j]-x[i]);
      int b1=abs(y[j]-y[i]);

      printf("a1:%d\n",a1);
      printf("b1:%d\n",b1);

      for(int k=j;k<n;k+=1){
        if(j==k)continue;
        printf("i:%d,j%d,k%d\n",i,j,k);
        int a2=abs(x[k]-x[j]);
        int b2=abs(y[k]-y[j]);

        printf("a2:%d\n",a2);
        printf("b2:%d\n",b2);

        int b1a2=b1*a2;
        printf("b1a2:%d\n",b1a2);

        int b2a1=b2*a1;
        printf("b2a1:%d\n",b2a1);

        // if(b1/a1==b2/a2)
        if(b1a2==b2a1)return 1;
      }
    }
  }
  return 0;
}

int main() {
  scanf("%d",&n);
  rep(i,n){
    scanf("%d%d",x+i,y+i);
  }

  int ans=solve();
  if(ans) puts("Yes");
  else puts("No");

  return 0;
}
