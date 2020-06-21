#include <stdio.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807

/**
 * target について、割り切れるものが無いか探す
 * 割り切れるものがあったら 1 を返す
 * なければ 0 を返す
 * @param target: long long int
 *        割られる対象
 * @param A[]: long long int
 *        これを用いて target を割っていく
 * @param N: long long int
 *        配列Aの要素数
 * @param variable_i: long long int
 *        i !== j という条件を満たすために、呼び出し側の iteration_count をもらいたかった
 * @return short int 0 | 1
 */
short find_div(long long target, long long A[], long long N, long long variable_i) {
  short ret_val = 0; // 見つからなかった
  rep(i, N) {
    if (variable_i == i) {
      continue;
    }
    //    printf("target: %lld\n", target);
    //    printf("i: %d\n", i);
    //    printf("A[i]: %lld\n", A[i]);
    //    printf("target / A[i]: %lld\n\n", target / A[i]);
    // 余りが0ということは割り切れた
    if (target % A[i] == 0) {
      ret_val = 1;
    }
  }
  return ret_val;
}

int main() {
  long long N; // <= 2 * 10^5
  scanf("%lld", &N);

  long long A[N]; // <= 10^6
  rep(i, N) {
    scanf("%lld", A + i);
  }

  long long output = 0;
  short div_ans[1000000];
  // 2で初期化
  rep(i, N) {
    div_ans[A[i]] = 2;
  }
  // 入力の1つ目から順に見ていく
  rep(i, N) {
    // 2だったら初期値
    // なのでfind_divの結果を入れる
    if (div_ans[A[i]] == 2) {
      //      printf("A[i]: %lld\n", A[i]);
      div_ans[A[i]] = find_div(A[i], A, N, i);
    }
    if (div_ans[A[i]] == 0) {
      //      printf("A[i]: %lld\n", A[i]);
      output += 1;
    }
  }

  printf("%lld\n", output);

  return 0;
}
