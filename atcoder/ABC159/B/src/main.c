#include <stdio.h>
#include <stdlib.h>

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

int batch(char*s,int l){
  int odd=l%2!=0;
  // printf("odd: %d\n",odd);
  int r=1;
  int n=l;
  if(odd)n-=1;
  int h=n/2;
  // printf("h: %d\n",h);
  rep(i,h){
    int j=n-i-1;
    if(odd)j+=1;
    // printf("i: %d\n",i);
    /* if(odd)printf("n-i: %d\n",n-i); */
    /* else printf("n-i-1: %d\n",n-i-1); */
    // printf("s[i]: %c\n",s[i]);
    /* if(odd)printf("s[n-i]: %c\n",s[n-i]); */
    /* else printf("s[n-i-1]: %c\n",s[n-i-1]); */
    if(s[i]!=s[j])r=0;
  }
  return r;
}

int main() {
  char s[100];
  scanf("%s",s);
  int n=0;
  rep(i,100){
    if(s[i]=='\0'){
      n=i;
      break;
    }
  }
  // printf("%d\n",n);
  if(batch(s,n)==0){
    puts("No");
    return 0;
  }
  int half_l=((n-1)/2);
  char first_half_s[half_l+1];
  char second_half_s[half_l+1];
  rep(i,half_l){
    first_half_s[i]=s[i];
    second_half_s[i]=s[half_l+1+i];
  }

  /* puts(first_half_s); */
  /* puts(second_half_s); */

  if(batch(first_half_s,half_l)==1){
    if(batch(second_half_s,half_l)==1){
      puts("Yes");
      return 0;
    }
  }

  puts("No");

  return 0;
}
