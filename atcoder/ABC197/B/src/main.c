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

int cnt=0;
int start_h,start_w;
int height,width;
char c[510][510];
int visited[510][510];

void h_search(int h,int w){
  if(h<0)return;
  if(w<0)return;
  if(h>=height)return;
  if(w>=width)return;
  // 入力がスタート地点だった場合
  if(h==start_h && w==start_w){
  }else{
    if(c[h][w]=='#')return;
  }
  if(visited[h][w]==1)return;
  visited[h][w]=1;
  cnt+=1;
  // if(c[h][w]=='g')return;
  h_search(h-1,w);
  h_search(h+1,w);
}

void w_search(int h,int w){
  if(h<0)return;
  if(w<0)return;
  if(h>=height)return;
  if(w>=width)return;
  // if(c[h][w]=='#')return;
  // 入力がスタート地点だった場合
  if(h==start_h && w==start_w){
  }else{
    if(c[h][w]=='#')return;
  }
  if(visited[h][w]==1)return;
  visited[h][w]=1;
  cnt+=1;
  // if(c[h][w]=='g')return;
  w_search(h,w+1);
  w_search(h,w-1);
}

int main() {
  int x,y;
  scanf("%d%d%d%d",&height,&width,&x,&y);
  start_h=x-1;
  start_w=y-1;
  rep(h,height){
    scanf("%s",c[h]);
    rep(w,width){
      visited[h][w]=0;
    }
  }
  h_search(start_h,start_w);
  visited[start_h][start_w]=0;
  if(c[start_h][start_w]=='.')cnt-=1;
  w_search(start_h,start_w);
  printf("%d\n",cnt);
  return 0;
}

/* int main() { */
/*   int h,w,x,y; */
/*   scanf("%d%d%d%d",&h,&w,&x,&y); */
/*   char s[h][w+1]; */
/*   rep(i,h){ */
/*     scanf("%s",s[i]); */
/*   } */
/*   x-=1; */
/*   y-=1; */
/*   int cnt=0; */
/*   rep(i,h){ */
/*     // printf("%c\n",s[i][j]); // debug */
/*     if(i==x){ */
/*       rep(j,w){ */
/*         if(s[i][j]=='.'){ */
/*           cnt+=1; */
/*         } */
/*       } */
/*     }else{ */
/*       if(s[i][y]=='.'){ */
/*         cnt+=1; */
/*       } */
/*     } */
/*   } */
/*   printf("%d\n",cnt); */
/*   return 0; */
/* } */
