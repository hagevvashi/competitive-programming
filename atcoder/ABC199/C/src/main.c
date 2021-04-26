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
  int n;
  scanf("%d",&n);
  char s[n*2];
  scanf("%s",s);
  int q;
  scanf("%d",&q);
  int t[q],a[q],b[q];
  rep(i,q){
    scanf("%d",t+i);
    scanf("%d",a+i);
    scanf("%d",b+i);
  }

  rep(i,q){
    if(t[i]==1){
      // puts(s);
      swap(s[a[i]-1],s[b[i]-1]);
      // puts(s);
    } else {
      if(t[i]==2){
        // puts(s);
        char second_half_s[n];
        char first_half_s[n];
        strcpy(first_half_s,s+n);

        /* rep(i,n){ */
        /*   swap(s[i],s[n+i]); */
        /* } */
        // puts(s);
      }
    }
  }
  puts(s);
  return 0;
}
