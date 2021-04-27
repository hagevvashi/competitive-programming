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
  char*s;
  int n;
  scanf("%d",&n);
  char s1[n*2+1];
  char s2[n*2+1];
  s=s1;
  scanf("%s",s);
  int q;
  scanf("%d",&q);
  int t[q],a[q],b[q];
  rep(i,q){
    scanf("%d",t+i);
    scanf("%d",a+i);
    scanf("%d",b+i);
  }

  int flip=0;

  rep(i,q){
    if(t[i]==1){
      // puts(s);
      int c=a[i]-1;
      int d=b[i]-1;
      if(flip!=0){
        if(c>=n){
          c-=n;
        }else{
          c+=n;
        }
        if(d>=n){
          d-=n;
        }else{
          d+=n;
        }
      }
      swap(s[c],s[d]);
      // puts(s);
    } else {
      // printf("flip: %d\n",flip);
      flip=flip==0?1:0;
      // printf("flip: %d\n",flip);
    }
  }
  if(flip!=0){
    /* rep(i,n){ */
    /*   // puts(s); */
    /*   swap(s[i],s[n+i]); */
    /*   // puts(s); */
    /* } */

    strcpy(s2,s+n);
    s[n]='\0';
    strcpy(s2+n,s);
    s=s2;
  }
  puts(s);
  return 0;
}
