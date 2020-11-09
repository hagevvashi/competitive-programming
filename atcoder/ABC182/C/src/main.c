#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(type, a, b) { type temp = a; a = b; b = temp; }

int mypow(x,y){
  int r=1;
  rep(i,y){
    r*=x;
  }
  return r;
}

int c_digit(int x){
  int ans=0;
  while(x!=0){
    x/=10;
    ans+=1;
  }
  return ans;
}

int n;
int * ans;
int max_digit;

int solve2(int*foo,int d){
  int s=0;
  for(int i=0;i<max_digit;i+=1){
    // printf("%d\n",foo[i]);
    // printf("%d\n",f);
    printf("d:%d\n",d);
    printf("i:%d\n",i);
    if(d==i)continue;
    int f=mypow(10,i-1);
    int g=f*foo[i];
    printf("%d\n",g);
    s+=g;
  }
  return s;
}

int solve1(x){
  int foo[max_digit];
  for(int i=1;i<=max_digit;i+=1){
    int f=mypow(10,max_digit-i);
    // printf("%d\n",f);
    int g=x/f;
    // printf("%d\n",g);
    foo[max_digit-i]=g;
    x-=g*f;
  }
  rep(i,max_digit){
    int h=solve2(foo,i);
    // printf("%d\n",h);
  }
  return -1;
}

int main() {
  scanf("%d",&n);
  max_digit=c_digit(n);
  ans=array(max_digit,int);
  solve1(n);
  return 0;
  free(ans);
}
