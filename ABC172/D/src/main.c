#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807

int compare_int(const void *a, const void *b) {
    return *(long long*)a - *(long long*)b;
}

long long * enum_devisors(long long N) {
  long long res_index = 1;

  for (long long i = 1; i * i <= N; i += 1) {
    if (N % i == 0) {
      res_index += 1;
      if (N / i != i) {
        res_index += 1;
      }
    }
  }

  long long * res = (long long *)malloc(sizeof(long long) * res_index);

  res_index = 0;

  for (long long i = 1; i * i <= N; i += 1) {
    if (N % i == 0) {
      res[res_index] = i;
      res_index += 1;
      if (N / i != i) {
        res[res_index] =i;
        res_index += 1;
      }
    }
  }

  qsort(res, MAX, sizeof(long long), compare_int);
  return res;
}

int main() {
  int N;
  scanf("%d", &N);

  long long re_count = 0;
  for (int i = 1; i <= N; i += 1) {
    long long * re = enum_devisors(i);
    for (unsigned long j = 0; j < sizeof(re); j += 1) {
      re_count += re[j];
    }
    free(re);
  }

  printf("%lld\n", re_count);

  return 0;
}
