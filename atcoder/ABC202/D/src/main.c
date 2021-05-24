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
#define cswap(a, b) { char temp = a; a = b; b = temp; }

void reverse(char*a,int n) {
  int l = 0;
  int r = n - 1;
  while(l < r) {
    cswap(a[l], a[r]);
    l += 1;
    r -= 1;
  }
}

int next_permutation(char * p, int n) {
  int l = n - 2;
  int r = n - 1;
  int ret = 0;
  // while (--l >= 0 && a[l] >= a[l + 1]);
  while(l >= 0) {
    if (p[l] < p[l + 1]) {
      break;
    }
    l -= 1;
  }
  if (l >= 0) {
    ret = 1;
    while (l < r) {
      if (p[l] < p[r]) {
        break;
      }
      r -= 1;
    }
    swap(p[l], p[r]);
  }
  reverse(p + (l + 1), n - (l + 1));
  return ret;
}

int main() {
  int a,b;
  ll k;
  scanf("%d%d%lld",&a,&b,&k);

  char s[a+b+1];
  int l=0;
  while(1){
    if(l==a){
      break;
    }
    s[l]='a';
    l+=1;
  }
  while(1){
    if(l==a+b){
      break;
    }
    s[l]='b';
    l+=1;
  }
  s[l]='\0';
  // puts(s);

  k-=1;
  ll index=0;
  char ans[l];
  do {
    if(index==k){
      strcpy(ans,s);
    }
    index+=1;
  } while(next_permutation(s, l));
  puts(ans);
  return 0;
}
