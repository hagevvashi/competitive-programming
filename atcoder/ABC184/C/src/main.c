#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(type, a, b) { type temp = a; a = b; b = temp; }

int solve(int x,int y){
  // 0手
  // 2点が一致するパターン
  if (x == 0 && y == 0) return 0;
  // 1手
  // 傾きが+1の斜め移動のみで到達可能なケース
  if (0 == x+y) return 1;
  // 傾きが-1の斜め移動のみで到達可能なケース
  if (0 == x-y) return 1;
  // 3回以内の隣接移動で到達可能なケース
  if (abs(x)+abs(y) <= 3) return 1;
  // 2手
  if (0 == (x+y)%2) return 2;
  if (abs(x)+abs(y) <= 6) return 2;
  if (abs(x+y) <= 3) return 2;
  if (abs(x-y) <= 3) return 2;
  return 3;
}

int main() {
  ll x1,y1,x2,y2;
  scanf("%lld%lld",&x1,&y1);
  scanf("%lld%lld",&x2,&y2);
  printf("%d\n",solve(x2-x1,y2-y1));
  return 0;
}
