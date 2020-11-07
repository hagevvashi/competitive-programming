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

/**
 * 0-12までの階上を持っている配列
 */
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

int f(int * items, int n) {
  int dictionary_order = 1;

  rep(i, n - 1) {
    // 次の桁の階上がそのままテーブルの幅となる
    // 1桁目が決まっている時点で、全体の個数-1の選択肢から全体の個数-1を選ぶ順列になるから
    // 例えば、N=4, A={*,*,*,*}, i=0 の場合 (n-(i+1))!=3!=6
    // 1-*-*-*: 1 ,2 ,3 ,4 ,5 ,6
    // 2-*-*-*: 7 ,8 ,9 ,10,11,12
    // 3-*-*-*: 13,14,15,16,17,18
    // 4-*-*-*: 19,20,21,22,23,24

    // 例えば、N=4, A={2,*,*,*}, i=1 の場合 (n-(i+1))!=2!=2
    // 2-1-*-*: 7 , 8
    // 2-3-*-*: 9 ,10
    // 2-4-*-*: 11,12
    int range = factorial[n - (i + 1)];
    // 現在の桁-1の数字にテーブルの幅をかけると、どのテーブルに乗っているかが判明する

    // 例えば、N=4, A={2,*,*,*}, i=0 の場合 X[i] = (n-(i+1))! * (A[i]-1) = 3! * 1 = 6
    // i=0 の場合は、実際には X[i]+1 ~ X[i]*2 がテーブルの範囲(R)となる
    // R[X[i]]: X[i]+1-X[i]*2
    // R[   0]:      1-     6
    // R[   6]:      7-    12
    // R[  12]:     13-    18
    // R[  18]:     19-    24

    // 例えば、N=4, A={2,4,*,*}, i=1 の場合 X[i] = (n-(i+1))! * (A[i]-1) = 2! * 3 = 6
    // i=1 の場合は、実際には i=0 で判明した X[i-1] + 1 に X[i] を足した数 ~ ...が範囲(R)となる
    // 1 + X[i-1] + X[i] = 1 + 6 + 6 = 13
    // R[X[i]]: X[i-1]+X[i]+1-...
    // R[   6]:            13- 14
    int base = range * (items[i] - 1);

    // しかし、2項目以降問題になることがある
    // この数列上に同じ数字は複数回登場しない
    // 例えば、N=4, A={2,*,*,*}, i=1 の時
    // 2-1-*-*: 7 ,8
    // 2-2-*-*: 9 ,10
    // 2-3-*-*: 11,12
    // 2-4-*-*: 13,14
    // となる
    // しかし実際には 2-2-*-* はない
    // だからA[i]よりも小さい数がA[i-1],A[i-2]...にあった場合、その数分かける幅
    // ・・・つまりテーブル一つ丸々引く必要がある
    // 例えば、N=4, A={2,4,*,*}, i=1 の場合 (n-(i+1))! * (F(A,i)) = 2! * 1 = 2
    int sub = range * count_smaller_value_item(items, i);

    // 例えば、N=4, A={2,4,*,*}, i=1 の場合 (n-(i+1))! * (F(A,i)) = 2! * 1 = 2 となり
    // 実際は 11, 12 が選択肢だったのに 13, 14 になっていたところを
    // -2 することで実際のテーブルに戻すことができる
    int table = base - sub;

    // ここまでの数字を 1 から順に足していくことで辞書順が判明する
    dictionary_order += table;
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
