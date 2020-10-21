#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(type, a, b) { type temp = a; a = b; b = temp; }

int n;
int main() {
  scanf("%d",&n);
  int mh=0;
  int ans=0;
  rep(i,n){
    int h;
    scanf("%d",&h);
    if(h<mh){}else{ans+=1;}
    mh=max(h,mh);
  }
  printf("%d\n",ans);
  return 0;
}
