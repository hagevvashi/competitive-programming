#include <cstdio>

int main() {
  int seconds;
  scanf("%d", &seconds);

  int count_per_second;
  scanf("%d", &count_per_second);

  int finish_seconds;
  scanf("%d", &finish_seconds);

  int latest_seconds;
  latest_seconds = finish_seconds / seconds;

  int total_count;
  total_count = latest_seconds * count_per_second;

  printf("%d\n", total_count);

  return 0;
}
