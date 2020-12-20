#include <stdio.h>
#include <stdlib.h>

#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define rep(i, n, type) for (type i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(a, b, type) { type temp = a; a = b; b = temp; }

int mypow(int x, int y) {
  int r=1;
  rep(i,y,int){
    r*=x;
  }
  return r;
}

int contain_seven(int x, int base) {
  int r = 0;

  int copy_x=x;
  int keta=0;
  while(1){
    copy_x/=base;
    keta+=1;
    if(copy_x<1){
      break;
    }
  }
  copy_x=x;
  for (int i = keta - 1; i >= 0; i -= 1) {
    int ketanosaishosu = mypow(base,i);
    int ketanokazu = copy_x/ketanosaishosu;
    if (ketanokazu == 7) {
      r=1;
      break;
    }
    copy_x-=ketanosaishosu*ketanokazu;
    // printf("%d\n",ketanokazu);
  }
  return r;
}

int main() {
  int n;
  scanf("%d",&n);

  int ans = 0;
  rep(i,n,int){
    if(contain_seven(i+1, 10)==0){
      if(contain_seven(i+1, 8)==0){
        ans+=1;
      }
    }
  }

  printf("%d\n",ans);
  return 0;
}
