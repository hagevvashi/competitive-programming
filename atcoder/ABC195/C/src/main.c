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

int main() {
  ll n;
  scanf("%lld",&n);

  if (n >= 1000000000000000) {
    printf("%lld\n", 3998998998999000 + ((n - 1000000000000000) + 1) * 5);
  } else {
    if (n >= 1000000000000) {
      printf("%lld\n", 2998998999000 + ((n - 1000000000000) + 1) * 4);
    } else {
      if (n >= 1000000000) {
        printf("%lld\n", 1998999000 + ((n - 1000000000) + 1) * 3);
      } else {
        if (n >= 1000000) {
          printf("%lld\n",999000 + ((n - 1000000) + 1) * 2);
        } else {
          if (n >= 1000) {
            printf("%lld\n", 0 + ((n - 1000) + 1) * 1);
          } else {
            puts("0");
          }
        }
      }
    }
  }

  /* // X>=1000: 10^3 */
  /* // n = (1000000 - 1); */
  /* if (n >= 1000) { */
  /*   printf("%lld\n", 0 + ((n - 1000) + 1) * 1); */
  /* } else { */
  /* // X>=1000000: 10^6 */
  /* // n = (1000000000 - 1); */
  /*   if (n >= 1000000) { */
  /*     printf("%lld\n",999000 + ((n - 1000000) + 1) * 2); */
  /*   } else { */

  /* // X>=1000000000: 10^9 */
  /* // n = (1000000000000 - 1); */
  /*     if (n >= 1000000000) { */
  /*       printf("%lld\n", 1998999000 + ((n - 1000000000) + 1) * 3); */
  /*     } else { */

  /* // X>=1000000000000: 10^12 */
  /* // n = (1000000000000000 - 1); */
  /*       if (n >= 1000000000000) { */
  /*         printf("%lld\n", 2998998999000 + ((n - 1000000000000) + 1) * 4); */
  /*       } else { */
  /* // X>=1000000000000000: 10^15 */
  /*         if (n >= 1000000000000000) { */
  /*           printf("%lld\n", 3998998998999000 + ((n - 1000000000000000) + 1) * 5); */
  /*         } else { */
  /*           printf("%d\n", 0); */
  /*         } */
  /*       } */
  /*     } */
  /*   } */
  /* } */
  return 0;
}
