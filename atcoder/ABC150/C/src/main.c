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

int factorial[13] = {
  0,
  1,
  2,
  6,
  24,
  120,
  720,
  5040,
  40320,
  362880,
  3628800,
  39916800,
  479001600/*,
  6227020800
  */
};

/**
 * already item number less than current item value
 * すでに計算した項について
 * 現在の項番の値より小さいものがあったら
 * 数えて返す
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
    int range = factorial[n - (i + 1)];
    int start_point = range * (items[i] - 1);
    int x = range * count_smaller_value_item(items, i);
    int table = start_point - x;
    dictionary_order += table;
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

  int ans=abs(f(p,n)-f(q,n));
  printf("%d\n",ans);

  return 0;
}
