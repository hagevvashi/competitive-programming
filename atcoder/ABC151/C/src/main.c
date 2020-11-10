#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(type, a, b) { type temp = a; a = b; b = temp; }

int n,m;
int*p;
int*t;
int*f;
char s[100010][3];

int main() {
  scanf("%d%d",&n,&m);
  p=array(n,int);
  rep(i,m){
    scanf("%d",p+i);
    p[i]-=1;
    scanf("%s",s[i]);
  }
  t=array(n,int);
  f=array(n,int);
  rep(i,m){
    if(s[i][0]=='A'&&s[i][1]=='C'){
      t[p[i]]=1;
    }else{
      if(t[p[i]]!=1){
        f[p[i]]+=1;
      }
    }
  }
  int ta=0;
  int fa=0;
  rep(i,n){
    // printf("t[%d]:%d\n",i,t[i]);
    // printf("f[%d]:%d\n",i,f[i]);
    ta+=t[i];
    fa+=f[i];
  }
  printf("%d %d\n",ta,fa);
  return 0;
  free(t);
  free(p);
  free(f);
}
