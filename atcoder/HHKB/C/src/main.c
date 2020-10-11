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
int * p;

int c(const void * a, const void * b) {
  return *(int *)a - *(int *)b;
}

int solve(int x) {
  int * q;
  q = array(x + 1, int);
  rep(i, x + 1) {
    q[i] = p[i];
  }
  // rep(i, x + 1) {
  //   printf("q[%d]: %d\n", i, q[i]);
  // }
  qsort(q, x + 1, sizeof(int), c);
  // rep(i, x + 1) {
  //   printf("q[%d]: %d\n", i, q[i]);
  // }
  int r = 0;
  rep(i, x + 1) {
    if (i != 0) {
      if (q[i] == q[i - 1]) {
        continue;
      }
    }
    // printf("r: %d\n", r);
    // printf("i: %d\n", i);
    // printf("q[%d]: %d\n", i, q[i]);
    if (r == q[i]) {
      r += 1;
    } else {
      break;
    }
  }
  free(q);
  return r;
}

int main() {

  scanf("%d", &N);
  p = array(N, int);

  /* rep(i, N) { */
  /*   scanf("%d", p + i); */
  /* } */

  int * ans;
  ans = array(N , int);
  rep(i, N) {
    int r = 0;
    int x;
    scanf("%d", &x);
    if (x != r) {
      r += 1;
    }
    ans[i] = r;
  }

  rep(i, N) {
    printf("%d\n", solve(i));
  }

  free(p);
  free(ans);
  return 0;
}
