#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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
  int array[4];
  rep(i,4)array[i]=0;
  char s[11];
  scanf("%s",s);
  int ans=0;
  rep(j,10)rep(k,10)rep(l,10)rep(m,10){
    array[0]=j;
    array[1]=k;
    array[2]=l;
    array[3]=m;
    /* rep(i,4){ */
    /*   printf("i: %d\n",i); */
    /*   printf("array[i]: %d\n",array[i]); */
    /* } */
    // ここで array の組み合わせ的に当てはまるか検証して、当てはまるなら ans+=1 する
    bool fullfill=true;
    // printf("before: fullfill: %d\n",fullfill);
    rep(i,10){
      if(s[i]=='o'){
        // printf("i: %d\n",i);
        if(array[0]!=i && array[1]!=i && array[2]!=i && array[3]!=i){
          fullfill=false;
          break;
        }
        // printf("fullfill: %d\n",fullfill);
      }else{
        if(s[i]=='x'){
          if(array[0]==i){
            fullfill=false;
            break;
          }
          if(array[1]==i){
            fullfill=false;
            break;
          }
          if(array[2]==i){
            fullfill=false;
            break;
          }
          if(array[3]==i){
            fullfill=false;
            break;
          }
        }else{
          // このケースはなんでもOK
          continue;
          /* if(s[i]=='?'){ */
          /* }else{ */
          /* } */
        }
      }
    }
    // printf("after: fullfill: %d\n",fullfill);
    if(fullfill){
      ans+=1;
    }
  }
  printf("%d\n",ans);
  return 0;
}
