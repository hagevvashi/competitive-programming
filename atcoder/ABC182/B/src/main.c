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
int*a;

int gcd(int x,int y){
  if(y == 0)return x;
  return gcd(y,x%y);
}

int solve1(){
  int ans=0;
  for(int i=1;i<n;i+=1){
    int s=gcd(a[i-1],a[i]);
    ans=max(ans,s);
  }
  return ans;
}

int solve2(){
  int cnt[1010]={0};
  for(int i=2;i<=1000;i+=1){
    rep(j,n){
      if(a[j]%i==0){
        cnt[i]+=1;
      }
    }
  }
  int mxcnt=0;
  for(int i=2;i<=1000;i+=1){
    mxcnt=max(mxcnt,cnt[i]);
  }
  // printf("mxcnt:%d\n",mxcnt);
  /* for(int i=2;i<=1000;i+=1){ */
  /*   printf("cnt[%d]:%d\n",i,cnt[i]); */
  /* } */
  for(int i=2;i<=1000;i+=1){
    // printf("mxcnt:%d\n",mxcnt);
    // printf("cnt[%d]:%d\n",i,cnt[i]);
    if(cnt[i]==mxcnt){
      return i;
    }
  }
  return 1;
}

int main() {
  scanf("%d",&n);
  a=array(n,int);
  rep(i,n){
    scanf("%d",a+i);
  }
  int ans;
  // ans=solve1();
  ans=solve2();
  printf("%d\n",ans);
  return 0;
  free(a);
}
