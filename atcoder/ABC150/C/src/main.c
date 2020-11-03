#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(type, a, b) { type temp = a; a = b; b = temp; }
#define my_abs(x) ((x) >= 0 ? (x) : -(x))

int factorial(int n){
  if(n==0)return 0;
  if(n==1)return 1;
  if(n==2)return 2;
  if(n==3)return 6;
  if(n==4)return 24;
  if(n==5)return 120;
  if(n==6)return 720;
  if(n==7)return 5040;
  if(n==8)return 40320;
  if(n==9)return 362880;
  if(n==10)return 3628800;
  if(n==11)return 39916800;
  if(n==12)return 479001600;
  // if(n==13)return 6227020800; // int overflow
  return -1;
}

/**
 * すでに計算した項番について
 * 現在の項番の値より小さいものがあったら
 * 加算して返す
 */
int count_smaller_value_item(int * items, int current_index) {
  int re = 0;
  rep(i, current_index) {
    if (items[i] < items[current_index]) {
      re += 1;
    }
  }
  return re;
};

int f(int * items,int n) {
  int dictionary_order = 1;

  rep(i, n - 1) {
    int s = factorial(n - (i + 1));
    int table = items[i] - (1 + count_smaller_value_item(items, i));
    int start_point = s * table;
    dictionary_order += start_point;
    // printf("dictionary_order:%d\n", dictionary_order);
  }
  return dictionary_order;
}

int main() {
  int n;
  scanf("%d",&n);

  int p[n],q[n];
  rep(i,n)scanf("%d",p+i);
  rep(i,n)scanf("%d",q+i);

  printf("f(p,n):%d\n",f(p,n));
  printf("f(q,n):%d\n",f(q,n));

  int ans=abs(f(p,n)-f(q,n));
  printf("%d\n",ans);

  return 0;
}
