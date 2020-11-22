#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(type, a, b) { type temp = a; a = b; b = temp; }

int main() {
  int n,x;
  scanf("%d%d",&n,&x);
  char s[n+1];
  scanf("%s",s);
  int score=x;
  rep(i,n){
    if(s[i]=='x'){
      if(score>0){
        score-=1;
      }
    }else{
      if(s[i]=='o'){
        score+=1;
      }
    }
  }
  printf("%d\n",score);
  return 0;
}
