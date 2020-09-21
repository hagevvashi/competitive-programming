#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(type, a, b) { type temp = a; a = b; b = temp; }


int N;
int ans = 0;

int baisu_cnt(int x) {
  int cnt = 0;
  for (int i = 1; i <= x; i += 1) {
    if (x % i == 0) {
      cnt += 1;
    }
  }
  return cnt;
}

void solve1() {
  int cnt_C = N - 1;

  for (int i = cnt_C; i > 0; i -= 1) {
    int mult_A_B = N - i;
    int cnt_baisu = baisu_cnt(mult_A_B);
    ans += cnt_baisu;
  }
}

int baisu[1000005] = {0};

void solve2() {
  for (int i = 1; i < N; i += 1) {
    for (int j = 1; j <= i; j += 1) {
      if (i % j == 0) {
        baisu[j] += 1;
      }
    }
  }
  for (int i = 1; i < N; i += 1) {
    ans += baisu[i];
  }
}

void solve3() {
  for (int A = 1; A < N; A += 1) {
    ans += (N - 1) / A;
  }
}

int main() {
  scanf("%d", &N);
  // solve1();
  // solve2();
  solve3();
  printf("%d\n", ans);
  return 0;
}
