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

char dict[27];

/**
 * lftr
 * -1: l lower than r
 * 0: l equal to r
 * 1: l larther than r
 */
int lftr(const char l,const char r){
  int re;
  int li,ri;
  rep(i,27){
    char c=dict[i];
    if(l==c){
      li=i;
    }
    if(r==c){
      ri=i;
    }
  }
  if(li==ri){
    re=0;
  }else{
    if(li<ri){
      re=-1;
    }else{
      re=1;
    }
  }
  return re;
}

int comp_str(const void*l,const void*r){
  int re=0;
  int llen=strlen(l);
  int rlen=strlen(r);
  int mlen=llen>rlen?rlen:llen;
  rep(i,mlen){
    char lc=((char*)l)[i];
    char rc=((char*)r)[i];
    int res=lftr(lc,rc); // -1,0,1
    if(res==0){
      continue;
    }
    re=res;
    break;
  }
  if(re==0){
    if(llen>rlen){
      re=1;
    }else{
      if(llen<rlen){
        re=-1;
      }else{
        re=0;
      }
    }
  }
  return re;
}

int main() {
  scanf("%s",dict);
  int n;
  scanf("%d",&n);
  char s[n][11];
  rep(i,n){
    scanf("%s",s[i]);
  }

  qsort(s,n,sizeof(s[n]),comp_str);

  rep(i,n){
    puts(s[i]);
  }

  return 0;
}
