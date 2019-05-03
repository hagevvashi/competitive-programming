#include <cstdio>

int incremental(int previous_index,
                int jewelry_count,
                int previous_value_sum,
                int value_array[],
                int value_sum_array[],
                int previous_cost_sum,
                int cost_array[],
                int cost_sum_array[],
                int* sum_index
                );

int incremental(
                int previous_index,
                int jewelry_count,
                int previous_value_sum,
                int value_array[],
                int value_sum_array[],
                int previous_cost_sum,
                int cost_array[],
                int cost_sum_array[],
                int* sum_index
                ) {
  for (int current_index = previous_index + 1; current_index < jewelry_count; ++current_index) {
    int current_value_sum = previous_value_sum + value_array[current_index];
    int current_cost_sum = previous_cost_sum + cost_array[current_index];
    incremental(
                current_index,
                jewelry_count,
                current_value_sum,
                value_array,
                value_sum_array,
                current_cost_sum,
                cost_array,
                cost_sum_array,
                sum_index
                );
    value_sum_array[*sum_index] = previous_value_sum + value_array[current_index];
    cost_sum_array[*sum_index] = previous_cost_sum + cost_array[current_index];
    *sum_index += 1;
  }
  return 0;
}

int main() {
  int jewelry_count;
  if (scanf("%d", &jewelry_count) != 1) {
    return 1;
  }

  int value_array[jewelry_count];
  for (int i = 0; i < jewelry_count; ++i) {
    if (scanf("%d", &value_array[i]) != 1) {
      return 1;
    }
  }

  int cost_array[jewelry_count];
  for (int i = 0; i < jewelry_count; ++i) {
    if (scanf("%d", &cost_array[i]) != 1) {
      return 1;
    }
  }

  int total_combination_count = 0;
  for (int i = jewelry_count; i > 0; --i) {
    int permutation_count_unit = 1;
    int count_divide_by = 1;
    for (int j = i; j > 0; --j) {
      permutation_count_unit = permutation_count_unit * (jewelry_count - (j - 1));
      count_divide_by = count_divide_by * j;
    }
    total_combination_count += permutation_count_unit / count_divide_by;
  }

  // int combination_index = 0;
  int value_sum_array[total_combination_count];
  int cost_sum_array[total_combination_count];
  int sum_index = 0;

  incremental(
              -1,
              jewelry_count,
              0,
              value_array,
              value_sum_array,
              0,
              cost_array,
              cost_sum_array,
              &sum_index
              );


  int max_profit = 0;
  int profit = 0;
  for (int i = 0; i < total_combination_count; ++i) {
    profit = value_sum_array[i] - cost_sum_array[i];
    if (profit > max_profit) {
      max_profit = profit;
    }
  }

  printf("%d\n", max_profit);
  return 0;
}
