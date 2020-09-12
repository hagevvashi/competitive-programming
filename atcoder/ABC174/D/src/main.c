#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807
#define array(N, t) (t*)calloc(N, sizeof(t))

/**
 * suppose 1 is R, 0 is W
 *
 * A: 1 -> 0
 * B: 0 -> 1
 *
 * [1]
 * |10101010
 * |00000000
 * A: 4
 * B: 0
 *
 * ↓
 * A: -1
 * B: +-0
 * ↓
 *
 * [2]
 * 1|0101010
 * 1|0000000
 * A: 3
 * B: 0
 *
 * ↓
 * A: +-0
 * B: +1
 * ↓
 *
 * [3]
 * 10|101010
 * 11|000000
 * A: 3
 * B: 1
 *
 * ↓
 * A: -1
 * B: +-0
 * ↓
 *
 * [4]
 * 101|01010
 * 111|00000
 * A: 2
 * B: 1
 *
 * ↓
 * A: +-0
 * B: +1
 * ↓
 *
 * [5]
 * 1010|1010
 * 1111|0000
 * A: 2
 * B: 2
 *
 * ...
 *
 * There are N + 1 places where you can put divider
 */
int main() {
  int N;
  scanf("%d", &N);

  char * C = array(N + 1, char);
  scanf("%s", C);

  int A = 0, B = 0;

  // Initialize
  // put the divider on the leftmost
  // increment A
  rep(i, N) {
    if (C[i] == 'R') {
      A += 1;
    }
  }

  int ans = A;

  // move the divider to the right in increments of one tick
  // but the condition (2 <= N, 200000 >= N) does not allow O(N^2)
  // Notice that moving the divider only increases or decreases operation-A or operation-B by plus or minus one
  // if C[i] is "R" then --A and if C[i] is "W" then ++B
  rep(i, N) {
    if (C[i] == 'R') {
      A -= 1;
    } else {
      B += 1;
    }
    // MAX
    int max = 0;
    if (A > B) {
      max = A;
    } else {
      max = B;
    }

    // MIN
    int min = 0;
    if (ans > max) {
      min = max;
    } else {
      min = ans;
    }
    ans = min;
  }

  printf("%d\n", ans);

  free(C);
  return 0;
}
