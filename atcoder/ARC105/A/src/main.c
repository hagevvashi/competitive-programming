#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(type, a, b) { type temp = a; a = b; b = temp; }

int main() {
  int A,B,C,D;
  scanf("%d%d%d%d", &A,&B,&C,&D);

  if (A == B + C + D) {
    puts("Yes");
  } else {
    if (A + B == C + D) {
      puts("Yes");
    } else {
      if (A + C == B + D) {
        puts("Yes");
      } else {
        if (A + D == B + C) {
          puts("Yes");
        } else {
          if (A + B + C == D) {
            puts("Yes");
          } else {
            if (A + B + D == C) {
              puts("Yes");
            } else {
              if (A + C + D == B) {
                puts("Yes");
              } else {
                puts("No");
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
