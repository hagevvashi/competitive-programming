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
int * p;
int main() {
  scanf("%d",&n);
  p=array(n,int);
  rep(i,n)scanf("%d",p+i);
  int ans=1;
  int m=p[0];
  for(int i=1;i<n;i+=1){
    if(m<p[i]){/*ng*/}else{
      //printf("p[%d]: %d\n",i,p[i]);
      ans+=1;
      m=min(m,p[i]);
    }
  }
  printf("%d\n",ans);
  free(p);
  return 0;
}
