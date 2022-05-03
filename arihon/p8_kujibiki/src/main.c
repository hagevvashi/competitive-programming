#include <stdio.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)

int main() {
  // e.g. 3 10
  int n,m;
  scanf("%d%d",&n,&m);
  // e.g. 1 3 5
  int k[m];
  rep(i,n)scanf("%d",k+i);
  // rep(i,n)printf("%d\n",k[i]); // debug
  int ans=0;
  rep(a,n)rep(b,n)rep(c,n)rep(d,n){
    if(k[a]+k[b]+k[c]+k[d]==m){
      ans=1;
      break;
    }
  }
  if(ans==1)printf("%s\n","Yes");
  else printf("%s\n","No");
  return 0;
}
