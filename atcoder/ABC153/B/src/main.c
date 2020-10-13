#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(type, a, b) { type temp = a; a = b; b = temp; }

int H,N;
// int * A;

int main() {
  scanf("%d%d",&H,&N);
  // A = array(N, int);
  int sum=0;
  rep(i, N) {
    int a;
    scanf("%d",&a);
    sum+=a;
  }
  if(H>sum)puts("No");
  else puts("Yes");
  // free(A);
  return 0;
}
