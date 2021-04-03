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

char week[7][4]={"SUN","MON","TUE","WED","THU","FRI","SAT"};

int main() {
  char s[4];
  scanf("%s",s);
  int ans;
  rep(i,7){
    if(strcmp(week[i],s)==0){
      ans=7-i;
    }
  }
  printf("%d\n",ans);
  return 0;
}
