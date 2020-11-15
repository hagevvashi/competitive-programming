#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(type, a, b) { type temp = a; a = b; b = temp; }

int cmpfunc(const void *str_a,const void *str_b){
  // return 1;
  return strcmp((char*)str_a,(char*)str_b);
}


int main() {
  typedef struct _T_CNT {
    char str[11];
    int cnt;
  } T_CNT;

  int n;
  // char**str_array;
  // int*cnt;
  char str_array[200010][11];
  T_CNT o[200010];

  scanf("%d",&n);
  // cnt=array(n,int);
  // str_array=(char**)malloc(sizeof(char)*11*n);

  rep(i,n){
    // str_array[i]=(char*)malloc(sizeof(char)*11);
    scanf("%s",str_array[i]);
  }

  puts("ここから入力状態の出力");
  rep(i,n){
    puts(str_array[i]);
  }

  qsort(
    str_array,
    n,
    11,
    cmpfunc
  );

  puts("ここから並び替え後の出力");
  rep(i,n){
    puts(str_array[i]);
  }

  int o_i=0;
  rep(i,n-1){
    if(strcmp(str_array[i],str_array[i+1])==0){
      if(strcmp(o[o_i].str,str_array[i])==0){
        o[o_i].cnt+=1;
      } else {
        strcpy(o[o_i].str,str_array[i]);
        o[o_i].cnt+=1;
        o_i+=1;
      }
    }
  }

  puts("ここから構造体出力");
  rep(i,o_i+1){
    printf("%d\n",o[i].cnt);
    printf("%s\n",o[i].str);
  }

  // メモリ解放
  /* rep(i,n){ */
  /*   free(str_array[i]); */
  /* } */
  // free(str_array);
  // free(cnt);

  return 0;
}
