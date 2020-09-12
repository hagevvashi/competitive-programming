#include <stdio.h>
// max size of queue
#define QL 2500

short front = 0, rear = 0;
// キュー
short Queue[QL][2],
  // 現在の判定座標
  queue_x,// 列(column)インデクス
  queue_y;// 行(raw)インデクス

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

short raw_count, column_count, start_raw_coordinate, start_column_coordinate, goal_raw_coordinate, goal_column_coordinate, raw_index, column_index, start_x, start_y, goal_x, goal_y;
short moves_count_array[50][50];
short MAX = 8192;

int main() {
  scanf("%hd %hd\n", &raw_count, &column_count);
  scanf("%hd %hd\n", &start_raw_coordinate, &start_column_coordinate);
  scanf("%hd %hd\n", &goal_raw_coordinate, &goal_column_coordinate);

  // 入力値は座標なのでインデクス値に置き換える
  start_y = start_raw_coordinate - 1;
  start_x = start_column_coordinate - 1;
  goal_y = goal_raw_coordinate - 1;
  goal_x = goal_column_coordinate - 1;

  // マスの入力
  for (raw_index = 0; raw_index < raw_count; ++raw_index) {
    for (column_index = 0; column_index < column_count; ++column_index) {
      if (getchar() == '#') {
        // 壁は0
        moves_count_array[column_index][raw_index] = 0;
      } else {
        // 通れるマスは8192
        moves_count_array[column_index][raw_index] = MAX;
      }
    }
    // for Enter
    getchar();
  }

  moves_count_array[start_x][start_y] = 0;

  // キューにスタート地点の座標を登録
  // 末尾インデックスの値が+1される
  push(start_x, start_y);

  while(!is_empty()) {
    // キューの先頭位置に登録されている座標を現在の判定座標にセット
    // 先頭インデックスの値が+1される
    pop();

    if (queue_x == goal_x && queue_y == goal_y) {
      break;
    }

    // 現在の判定座標の左隣の座標が通れるマスかどうか判定
    if (moves_count_array[queue_x - 1][queue_y] == MAX) {
      // 通れるマスならそのマスの値を、現在の判定座標のマスの値+1にする
      moves_count_array[queue_x - 1][queue_y] = moves_count_array[queue_x][queue_y] + 1;
      // キューに現在の判定座標の左隣の座標を登録
      // 末尾インデックスの値が+1される
      push(queue_x - 1, queue_y);
    }
    // 現在の判定座標の右隣の座標が通れるマスかどうか判定
    if (moves_count_array[queue_x + 1][queue_y] == MAX) {
      // 通れるマスならそのマスの値を、現在の判定座標のマスの値+1にする
      moves_count_array[queue_x + 1][queue_y] = moves_count_array[queue_x][queue_y] + 1;
      // キューに現在の判定座標の右隣の座標を登録
      // 末尾インデックスの値が+1される
      push(queue_x + 1, queue_y);
    }
    // 現在の判定座標の上の座標が通れるマスかどうか判定
    if (moves_count_array[queue_x][queue_y - 1] == MAX) {
      // 通れるマスならそのマスの値を、現在の判定座標のマスの値+1にする
      moves_count_array[queue_x][queue_y - 1] = moves_count_array[queue_x][queue_y] + 1;
      // キューに現在の判定座標の上の座標を登録
      // 末尾インデックスの値が+1される
      push(queue_x, queue_y - 1);
    }
    // 現在の判定座標の下の座標が通れるマスかどうか判定
    if (moves_count_array[queue_x][queue_y + 1] == MAX) {
      // 通れるマスならそのマスの値を、現在の判定座標のマスの値+1にする
      moves_count_array[queue_x][queue_y + 1] = moves_count_array[queue_x][queue_y] + 1;
      // キューに現在の判定座標の下の座標を登録
      // 末尾インデックスの値が+1される
      push(queue_x, queue_y + 1);
    }
  }

  printf("%d\n", moves_count_array[queue_x][queue_y]);

  return 0;
}
