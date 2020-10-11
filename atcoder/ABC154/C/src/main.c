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
int acc[1000000010] = {0};

int main() {
  scanf("%d",&N);
  int ans=1;
  rep(i, N) {
    int A;
    scanf("%d", &A);
    acc[A] += 1;
    if (acc[A] > 1) {
      ans=0;
    }
  }
  if(ans==1)puts("yes");
  else puts("No");
  return 0;
}
