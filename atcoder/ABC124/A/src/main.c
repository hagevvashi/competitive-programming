#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(type, a, b) { type temp = a; a = b; b = temp; }

int a,b;
int ans=0;
void solve(){
  if (a>=b) {
    ans+=a;
    a-=1;
  } else {
    ans+=b;
    b-=1;
  }
}
int main() {
  scanf("%d%d",&a,&b);
  solve();
  solve();
  printf("%d\n",ans);
  return 0;
}
