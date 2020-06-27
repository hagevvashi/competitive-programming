#include <stdio.h>
#include <math.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807

long long mypow(int n) {
  // return pow(26, n); // if n == 1
  // return pow(26, n - 1) + pow(26, n); // if n == 2
  // return pow(26, n - 2) + pow(26, n - 1) + pow(26, n); // if n == 3
  long long ans = 0;
  for (int i = 1; i < n; i = i + 1) {
    printf("ans: %lld\n", ans);
    ans += pow(26, i);
  }
  ans += pow(26, n);
  return ans;
}

int main() {
  // アルファベットはa-bまで26種類

  // a-z: 26
  // aa-zz: 26 + (26 * 26) = 702
  // aaa-zzz: 702 + (26 * 26 * 26) = 18278
  // aaaa-zzzz: 18278 + (26 * 26 * 26 * 26) = 475254
  // aaaaa-zzzzz: 475254 + (26^5) = 12356630
  // aaaaaa-zzzzzz: 12356630 + (26^6) = 321272406

  long long n;
  scanf("%lld", &n);

  /* int pow_count = 0; */
  /* while (n > mypow(pow_count)) { */
  /*   pow_count += 1; */
  /* } */

  /* printf("%d\n", pow_count); */
  long long shou = n / 26;
  long long amari = n % 26;

  

  return 0;
}
