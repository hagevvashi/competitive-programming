#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))

#define SIZE 3

enum status{
  EMPTY,
  VAILABLE,
  FULL
};

typedef struct {
  int data[SIZE];
  int head;
  int tail;
  int flag;
} queue_t;

void print_queue(queue_t * p_queue) {
  rep(i, SIZE) {
    printf("%d ", p_queue->data[i]);
  }
  printf("\n");
}

int main() {


  return 0;
}
