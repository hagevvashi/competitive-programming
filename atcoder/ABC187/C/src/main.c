#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define lrep(i, n) for (ll i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(a, b) { int temp = a; a = b; b = temp; }
#define lswap(a, b) { ll temp = a; a = b; b = temp; }

char s1[10010][15];
int s1cnt=0;
char s2[10010][15];
int s2cnt=0;

int main() {
  int n;
  scanf("%d",&n);

  char hoge;
  scanf("%c",&hoge);

  rep(i,n){
    int cnt=0;
    int flg=0;
    while(1){
      char c;
      scanf("%c",&c);
      if(c=='!'){
        flg=1;
        continue;
      }
      if(c=='\n'){
        if(flg==1){
          s2[s2cnt][cnt]='\0';
          s2cnt+=1;
        }else{
          s1[s1cnt][cnt]='\0';
          s1cnt+=1;
        }
        break;
      }else{
        if(flg==1){
          s2[s2cnt][cnt]=c;
        }else{
          s1[s1cnt][cnt]=c;
        }
        cnt+=1;
      }
    }
  }

  /* rep(i,s1cnt){ */
  /*   puts(s1[i]); */
  /* } */
  /* rep(i,s2cnt){ */
  /*   puts(s2[i]); */
  /* } */

  if(s1cnt<s2cnt){
    rep(i,s1cnt){
      rep(j,s2cnt){
        if(strcmp(s1[i],s2[j])==0){
          puts(s1[i]);
          return 0;
        }
      }
    }
  }else{
    rep(i,s2cnt){
      rep(j,s1cnt){
        if(strcmp(s2[i],s1[j])==0){
          puts(s2[i]);
          return 0;
        }
      }
    }
  }

  puts("satisfiable");

  return 0;
}
