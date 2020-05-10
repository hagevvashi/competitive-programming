#include <stdio.h>

static const char START = 's';
static const char GOAL = 'g';
static const char WAY = '.';
static const char WALL = '#';

typedef struct {
  short x;
  short y;
  short done;
  short type; // 0: start, 1: goal, 2: way, 3: wall
  char charachter;
} Coordinate;

void dfs(short x, short y, short max_x, short max_y, Coordinate object[max_y][max_x]) {
  if (x < 0 || y < 0 || x >= max_x || y >= max_y) {
    return;
  }
  if (object[y][x].done == 1) {
    return;
  }
  if (object[y][x].done != 1) {
    object[y][x].done = 1;
  }
  dfs(x - 1, y, max_x, max_y, object);
  dfs(x + 1, y, max_x, max_y, object);
  dfs(x, y - 1, max_x, max_y, object);
  dfs(x, y + 1, max_x, max_y, object);
}

int main() {
  char dummy;
  short height, width, start_x, start_y, goal_x, goal_y;
  scanf("%hd%hd", &height, &width);

  Coordinate object[height][width];
  for (short i = 0; i < height; i += 1) {
    scanf("%c", &dummy);
    for (short j = 0; j < width; j += 1) {
      char input;
      scanf("%c", &input);

      short type;
      short done;

      if (input == START) {
        start_x = j;
        start_y = i;
        object[i][j].type = 0;
        object[i][j].done = 0;
        object[i][j].x = j;
        object[i][j].y = i;
        object[i][j].charachter = input;
      } else if (input == GOAL) {
        goal_x = j;
        goal_y = i;
        object[i][j].type = 1;
        object[i][j].done = 0;
        object[i][j].x = j;
        object[i][j].y = i;
        object[i][j].charachter = input;
      } else {
        if (input == WAY) {
          type = 2;
          done = 0;
        }
        if (input == WALL) {
          type = 3;
          done = 1;
        }
        object[i][j].x = j;
        object[i][j].y = i;
        object[i][j].done = done;
        object[i][j].type = type;
        object[i][j].charachter = input;
      }

    }
  }

  /* for (short i = 0; i < height; i += 1) { */
  /*   for (short j = 0; j < width; j += 1) { */
  /*     printf("%s", "(y: "); */
  /*     printf("%hd", i); */
  /*     printf("%s", ", x: "); */
  /*     printf("%hd", j); */
  /*     printf("%s",")は、y: "); */
  /*     printf("%hd", object[i][j].y); */
  /*     printf("%s", ", x: "); */
  /*     printf("%hd", object[i][j].x); */
  /*     printf("%c", '\n'); */
  /*     printf("%s", "type: "); */
  /*     printf("%hd", object[i][j].type); */
  /*     printf("%c", '\n'); */
  /*     printf("%s", "done: "); */
  /*     printf("%hd", object[i][j].done); */
  /*     printf("%c", '\n'); */

  /*     printf("%c", '\n'); */
  /*   } */
  /* } */

  dfs(start_x, start_y, width, height, object);

  if (object[goal_y][goal_x].done == 1) {
    printf("%s", "Yes");
  } else {
    printf("%s", "No");
  }

  printf("%c", '\n');
  return 0;
}
