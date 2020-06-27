#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807

void solve(long long int n) {
  n--;
  if (n >= 26) {
    solve(n / 26);
  }
  putchar(n % 26 + 'a');
}

int main () {
  long long int n;
  scanf("%lld", &n);
  solve(n);
  puts("");
  return 0;
}
