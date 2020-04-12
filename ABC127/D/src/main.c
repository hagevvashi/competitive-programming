#include<stdio.h>
#include <stdlib.h>

typedef struct {
  int B;
  int C;
}bc;

int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}
int cmp( const void *p, const void *q ) {
    return ((bc*)q)->C - ((bc*)p)->C;
}


int main(){

  int n,m;
  int i,k;
  scanf("%d%d",&n,&m);
  long int ans=0;
  int a[n+20000];
   bc set[m+20000];



  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(i=0;i<m;i++){
    scanf("%d%d",&set[i].B,&set[i].C);
  }

  qsort(a,n,sizeof(int),compare_int);
  qsort(set,m,sizeof(bc),cmp);


  i=0;
  k=0;
  while(i<m){

    if(a[k]<=set[i].C&&set[i].B>0){
      a[k]=set[i].C;
      k++;
      set[i].B--;
    }else{
      i++;
    }
  }



    for(i=0;i<n;i++){
      ans+=a[i];
    }
    printf("%ld",ans);


  return 0;
}
