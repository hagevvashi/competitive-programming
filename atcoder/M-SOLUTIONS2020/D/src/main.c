#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807
#define array(N, t) (t*)calloc(N, sizeof(t))

int main() {
  int N;
  scanf("%d", &N);

  int * A = array(N, int);
  rep(i, N) {
    scanf("%d", A + i);
  }

  long long amount = 1000;

  rep(i, N - 1) {
    int stock_price_on_that_day = A[i];
    int stock_price_on_the_next_day = A[i + 1];

    if (stock_price_on_that_day < stock_price_on_the_next_day) {
      // quotient
      long long number_of_shares = amount / stock_price_on_that_day;
      // mod
      amount %= stock_price_on_that_day; // The amount of money left over from the sale.
      long long next_day_earnings = number_of_shares * stock_price_on_the_next_day;
      amount += next_day_earnings;
    }
  }

  printf("%lld\n", amount);

  free(A);
  return 0;
}
