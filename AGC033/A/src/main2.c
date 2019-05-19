#include <stdio.h>
#define QUEUE_MAX 1000000

int front = 0, rear = 0;
int Queue[QUEUE_MAX][2], queue_x, queue_y;
int start_point_array[QUEUE_MAX][2];
int start_point_index = 0;

void push(int x, int y) {
  Queue[rear][0] = x;
  Queue[rear][1] = y;
  rear += 1;
}

void pop() {
  queue_x = Queue[front][0];
  queue_y = Queue[front][1];
  front += 1;
}

int is_empty() {
  return (front == rear);
}

int raw_count, column_count, raw_index, column_index;
int moves_count_array[1000][1000];
int MAX = 2147483647;

int main() {
  scanf("%d %d\n", &raw_count, &column_count);

  for (raw_index = 0; raw_index < raw_count; raw_index += 1) {
    for (column_index = 0; column_index < column_count; column_index += 1) {
      if (getchar() == '#') {
        moves_count_array[column_index][raw_index] = 0;

        start_point_array[start_point_index][0] = column_index;
        start_point_array[start_point_index][1] = raw_index;

        start_point_index += 1;
      } else {
        moves_count_array[column_index][raw_index] = MAX;
      }
    }
    getchar();
  }

  for (int i = 0; i < start_point_index; i += 1) {
    push(start_point_array[i][0], start_point_array[i][1]);
  }

  while(!is_empty()) {
    pop();

    if (moves_count_array[queue_x - 1][queue_y] == MAX) {
      moves_count_array[queue_x - 1][queue_y] = moves_count_array[queue_x][queue_y] + 1;
      push(queue_x - 1, queue_y);
    }

    if (moves_count_array[queue_x + 1][queue_y] == MAX) {
      moves_count_array[queue_x + 1][queue_y] = moves_count_array[queue_x][queue_y] + 1;
      push(queue_x + 1, queue_y);
    }

    if (moves_count_array[queue_x][queue_y - 1] == MAX) {
      moves_count_array[queue_x][queue_y - 1] = moves_count_array[queue_x][queue_y] + 1;
      push(queue_x, queue_y - 1);
    }

    if (moves_count_array[queue_x][queue_y + 1] == MAX) {
      moves_count_array[queue_x][queue_y + 1] = moves_count_array[queue_x][queue_y] + 1;
      push(queue_x, queue_y + 1);
    }
  }

  printf("%d\n", moves_count_array[queue_x][queue_y]);

  return 0;
}
