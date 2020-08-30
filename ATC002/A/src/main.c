#include <stdio.h>
#include <stdlib.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))

#define SIZE 3

enum status {
  EMPTY,
  AVAILABLE,
  FULL
};

typedef struct {
  int data[SIZE];
  int head;
  int tail;
  int flag;
} queue_t;

// キューの中身を print 出力
void print_queue(queue_t * p_queue) {
  rep(i, SIZE) {
    printf("%d ", p_queue->data[i]);
  }
  printf("\n");
}

// キューの初期化
void init_queue(queue_t * p_queue) {
  // キューの中身を 0 埋め
  rep(i, SIZE) {
    p_queue->data[i] = 0;
  }
  // 初期化
  p_queue->head = 0;
  p_queue->tail = 0;
  p_queue->flag = EMPTY;
  print_queue(p_queue);
}

// enqueue関数
void enqueue(queue_t * p_queue, int value) {
  printf("enQ(%d)\n", value);
  // キューがFullの処理
  if (p_queue->flag == FULL) {
    printf("Full\n");
    return;
  }
  // キューがFullでないので、enqueue操作
  p_queue->data[p_queue->tail] = value;
  // リングバッファのため、tailが配列の終端だったら0にする
  if (p_queue->tail == SIZE - 1){
    p_queue->tail = 0;
    // 終端でなければ、tailをインクリメント
  } else {
    p_queue->tail += 1;
  }
  // フラグの更新
  if (p_queue->tail == p_queue->head) {
    p_queue->flag = FULL;
  } else {
    p_queue->flag = AVAILABLE;
  }
  print_queue(p_queue);
}

// dequeue関数
void dequeue(queue_t* p_queue) {
  printf("deQ\n");
  // キューがEmptyの処理
  if (p_queue->flag == EMPTY) {
    printf("Empty\n");
    return;
  }
  // キューがEmptyでなければ、dequeue操作
  p_queue->data[p_queue->head] = 0;
  // リングバッファのため、headが配列の終端だったら0にする
  if (p_queue->head == SIZE - 1) {
    p_queue->head = 0;
    // 終端でなければ、headをインクリメント
  } else {
    p_queue->head += 1;
  }
  // フラグの更新
  if (p_queue->tail == p_queue->head) {
    p_queue->flag = EMPTY;
  } else {
    p_queue->flag = AVAILABLE;
  }
  print_queue(p_queue);
}

int main() {
  queue_t queue;
  queue_t* p_queue = &queue;

  init_queue(p_queue);
  dequeue(p_queue);
  enqueue(p_queue, 1);
  enqueue(p_queue, 2);
  enqueue(p_queue, 3);
  enqueue(p_queue, 4);
  enqueue(p_queue, 5);
  dequeue(p_queue);
  dequeue(p_queue);
  dequeue(p_queue);
  dequeue(p_queue);
  dequeue(p_queue);
  enqueue(p_queue, 1);
  enqueue(p_queue, 2);
  enqueue(p_queue, 3);
  enqueue(p_queue, 4);
  dequeue(p_queue);
  dequeue(p_queue);
  dequeue(p_queue);
  dequeue(p_queue);
  enqueue(p_queue, 1);
  dequeue(p_queue);
  dequeue(p_queue);
  enqueue(p_queue, 1);
  enqueue(p_queue, 2);
  enqueue(p_queue, 3);
  dequeue(p_queue);
  dequeue(p_queue);
  dequeue(p_queue);
  dequeue(p_queue);
  dequeue(p_queue);
  enqueue(p_queue, 1);
  enqueue(p_queue, 2);
  enqueue(p_queue, 3);

  return 0;
}
