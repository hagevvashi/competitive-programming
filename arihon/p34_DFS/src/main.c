#include <stdio.h>
#include <stdbool.h>

#define rep(i,n)for(int i=0;i<n;i=i+1)
#define MAX_N 21

int n,k;
int a[MAX_N];

bool dfs(int i,int sum){
  if(i==n)return sum==k;
  if(dfs(i+1,sum))return true;
  if(dfs(i+1,sum+a[i]))return true;
  return false;
}

int main(){
  scanf("%d",&n);
  rep(i,n)scanf("%d",a+i);
  scanf("%d",&k);

  // printf("n: %d\n",n);
  // printf("a:");
  // rep(i,n)printf(" %d",a[i]);
  // puts("");
  // printf("k: %d\n",k);

  if(dfs(0,0))puts("Yes");
  else puts("No");
  return 0;
}
