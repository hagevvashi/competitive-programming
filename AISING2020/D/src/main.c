#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807

typedef struct {
  char * binary_string;
  int length;
} binary_data;

/**
 * n桁目のbitが0か1か知りたい
 * 1桁目のbitは1
 *
 * count: 4だとすると 5桁
 * remainder[0]: count + 1 桁目: 5桁目 -> 1
 * remainder[1]: count 桁目    : 4桁目 -> 0
 * remainder[2]: count - 1 桁目: 3桁目 -> 1
 * remainder[3]: count - 2 桁目: 2桁目 -> 0
 *                               1桁目は必ず1
 **/
binary_data to_binary(int input_decimal) {
  const short BASE = 2;

  // count + 1桁となる
  int count = 0;
  // count + 1桁目から2桁目までのbit(0 or 1)が入っている
  int remainder[10001];
  int quotient = input_decimal;
  while(quotient != 1) {
    // 2^nは2で割ると2^n-1となる。
    // n回目の商を2で割った余りが1(2^0)ということは、
    // n回割り算を耐えているので、元々2^nがあったということになる
    // n回目の商を2で割った余りが0ということは、2^nはなかった
    remainder[count] = quotient % BASE;
    quotient /= BASE;
    count += 1;
  }

  char * output;
  output = (char *)malloc((count + 1) * sizeof(char));  /* メモリ領域の確保 */

  // 1桁目は必ず1
  output[0] = '1';
  for (int i = 1; i <= count; i += 1) {
    // 2桁目から順にbit値をchar型にcastしている
    // remainder[count - 1]: 2桁目、remainder[count - 2]: 3桁目、、、
    output[i] = '0' + remainder[count - i];
  }
  output[count + 1] = '\0';

  binary_data ret_val;

  ret_val.binary_string = output;
  ret_val.length = count + 1;

  return ret_val;
}

int popcount(int n) {
  binary_data binary_data;
  binary_data = to_binary(n);

  // printf("%s\n", binary_data.binary_string);
  // printf("%d\n", binary_data.length);

  int ret_val = 0;
  rep(i, binary_data.length) {
    if (binary_data.binary_string[i] == '1') {
      ret_val += 1;
    }
  }

  free(binary_data.binary_string);

  return ret_val;
}

int f(int n) {
  int ret_val = 0;
  int tmp_val = n;
  do {
    tmp_val = tmp_val % popcount(tmp_val);
    ret_val += 1;
  } while(tmp_val != 0);

  return ret_val;
}

int main() {
  int cnt = f(7);

  printf("%d\n", cnt);

  return 0;
}
