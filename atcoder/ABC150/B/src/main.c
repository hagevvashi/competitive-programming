#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(type, a, b) { type temp = a; a = b; b = temp; }

int n;
char s[60];

int main() {
  scanf("%d",&n);
  scanf("%s",s);
  int ans=0;
  for(int i=2;i<n;i+=1){
    if(s[i-2]=='A'){
      if(s[i-1]=='B'){
        if(s[i]=='C'){
          ans+=1;
        }
      }
    }
  }
  printf("%d\n",ans);
  return 0;
}
