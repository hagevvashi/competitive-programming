#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ll long long
#define INF 2147483647
#define LINF ((1LL << 62) - (1LL << 31))
#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define lrep(i, n) for (ll i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(a, b) { int temp = a; a = b; b = temp; }
#define lswap(a, b) { ll temp = a; a = b; b = temp; }

int main() {
  char n[5];
  scanf("%s",n);

  char ans[5];

  int l=strlen(n);
  if(l==4){
    strcpy(ans,n);
  }else{
    if(l==3){
      ans[0]='0';
      ans[1]=n[0];
      ans[2]=n[1];
      ans[3]=n[2];
      ans[4]='\0';
    }else{
      if(l==2){
        ans[0]='0';
        ans[1]='0';
        ans[2]=n[0];
        ans[3]=n[1];
        ans[4]='\0';
      }else{
        if(l==1){
          ans[0]='0';
          ans[1]='0';
          ans[2]='0';
          ans[3]=n[0];
          ans[4]='\0';
        }
      }
    }
  }

  puts(ans);

  return 0;
}
