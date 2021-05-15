#include <stdio.h>
#include <stdlib.h>

#define ll long long
#define INF 2147483647
#define LINF ((1LL << 62) - (1LL << 31))
#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define lrep(i, n) for (ll i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(a, b) { int temp = a; a = b; b = temp; }
#define lswap(a, b) { ll temp = a; a = b; b = temp; }


int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int main() {
  int a[3];
  rep(i,3)scanf("%d",a+i);
  // rep(i,3)printf("%d\n",a[i]);
  qsort(a, 3, sizeof(int), compare_int);
  // rep(i,3)printf("%d\n",a[i]);
  int d2=a[2]-a[1];
  int d1=a[1]-a[0];
  if(d2==d1)puts("Yes");
  else puts("No");
  return 0;
}
