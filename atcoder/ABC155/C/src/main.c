#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(type, a, b) { type temp = a; a = b; b = temp; }

int n;
char**str_array;
int*cnt;

int cmpfunc(const void *a,const void *b){
  return *(char*)a - *(char*)b;
}

int main() {
  scanf("%d",&n);
  cnt=array(n,int);
  str_array=(char**)malloc(sizeof(char*)*n);
  rep(i,n){
    str_array[i]=(char*)malloc(sizeof(char)*11);
    scanf("%s",str_array[i]);
  }

  puts("ここから入力状態の出力");
  rep(i,n){
    puts(str_array[i]);
  }

  qsort(
    str_array,
    sizeof(str_array) / sizeof(str_array[0]),
    (size_t)sizeof(str_array[0]),
    cmpfunc);

  puts("ここから並び替え後の出力");
  rep(i,n){
    puts(str_array[i]);
  }

  // メモリ解放
  rep(i,n){
    free(str_array[i]);
  }
  free(str_array);

  return 0;
}
