#include <stdio.h>

#define rep(i,n)for(int i=0;i<n;i+=1)

#define MAX_N 101
#define MAX_M 101

int n,m;
char field[MAX_N][MAX_M];

void dfs(int x,int y){
  field[x][y]='.';
  for(int dx=-1;dx<=1;dx+=1){
    for(int dy=-1;dy<=1;dy+=1){
      int nx=x+dx,ny=y+dy;
      if(0<=nx && nx<n && 0<=ny && ny<m && field[nx][ny]=='W'){
        dfs(nx,ny);
      }
    }
  }
  return;
}

int main(){
  scanf("%d %d",&n,&m);
  // rep(i,n+1)rep(j,m+1)scanf("%c",&x[i][j]);
  rep(i,n)scanf("%s",field[i]);

  int res=0;
  rep(i,n)rep(j,m){
    if(field[i][j]=='W'){
      dfs(i,j);
      res+=1;
    }
  }
  printf("%d\n",res);
  /*
  puts("");
  for(int i=9;i<10;i+=1){
    printf("DEBUG(n=%d)\n",i);
    rep(j,m+2){
      printf("m=%d,",j);

        printf("format %s: ","\%c");
        printf("「%c」,",x[9][j]);
        printf("format %s: ","\%d");
        printf("「%d」\n",x[9][j]);  

    }
  }
  */
  // rep(i,n)printf("%s\n",x[i]);
  return 0;
}
