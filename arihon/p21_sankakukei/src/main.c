#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))

int main(){
  int n;
  scanf("%d",&n);
  int a[n];
  rep(i,n)scanf("%d",a+i);
  int ans=0;
  rep(i,n){
    rep(j,n){
      if(i==j)continue;
      rep(k,n){
        if(i==k)continue;
        if(j==k)continue;
        // Patterns where triangles are not formed
        if((abs(a[i]-a[j])>=a[k])||((a[i]+a[j])<=a[k]))continue;
        ans=max(ans,a[i]+a[j]+a[k]);
      }
    }
  }
  printf("%d\n",ans);
  return 0;
}
