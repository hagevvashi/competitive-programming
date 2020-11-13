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
char**s;
int*cnt;

int main() {
  scanf("%d",&n);
  cnt=array(n,int);
  s=(char**)malloc(sizeof(char*)*n);
  rep(i,n){
    s[i]=(char*)malloc(sizeof(char)*11);
    scanf("%s",s[i]);
  }
  puts("ここから入力状態の出力");
  rep(i,n){
    puts(s[i]);
  }
  rep(i,11){
    for(int j=1;j<n;j+=1){
      if(s[j-1][i] > s[j][i]){
        swap(char*,s[j-1],s[j]);
      }
    }
  }
  puts("ここから入並び替え後の出力");
  rep(i,n){
    puts(s[i]);
  }
  rep(i,n){
    free(s[i]);
  }
  free(s);
  return 0;
}
