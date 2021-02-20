#include <stdio.h>
#include <stdlib.h>

#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define lrep(i, n) for (ll i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(a, b) { int temp = a; a = b; b = temp; }
#define lswap(a, b) { ll temp = a; a = b; b = temp; }

int stl(char*s){
  int l=0;
  while(1){
    if(s[l]=='\0')break;
    l+=1;
  }
  return l;
}

int main() {
  char s[10001];
  scanf("%s",s);
  int a=1;
  int l=stl(s);
  rep(i,l){
    char c=s[i];
    if((i+1)%2==0){
      if((c>='A') && (c<='Z')){
        // puts("偶数かつ大文字");
      }else{
        a=0;
      }
    }else{
      if((c>='a') && (c<='z')){
        // puts("奇数かつ小文字");
      }else{
        a=0;
      }
    }
  }
  if(a==0){
    puts("No");
  }else{
    puts("Yes");
  }
  return 0;
}
