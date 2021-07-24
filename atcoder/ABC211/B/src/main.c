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
  char sdl[4][3]={
    {'H','\0'},
    {'2','B','\0'},
    {'3','B','\0'},
    {'H','R','\0'}
  };

  char sil[4][3];

  rep(i,4){
    scanf("%s",sil[i]);
  }



  int aflg=0;
  rep(i,4){
    int lflg=0;
    rep(j,4){
      if(strcmp(sdl[i],sil[j])==0){
        /* puts("debug"); */
        /* puts(sdl[i]); */
        /* puts(sil[j]); */
        lflg=1;
        strcpy(sil[j],"DD");
        break;
      }
    }
    if(lflg==0){
      aflg=1;
      break;
    }
    lflg=0;
  }

  if(aflg==0){
    puts("Yes");
  }else{
    puts("No");
  }

  return 0;
}
