#include <stdio.h>
#include <string.h>

int is_finished(int vertical_count, int horizontal_count, char input_char_array[][horizontal_count + 1]);

int is_finished(int vertical_count, int horizontal_count, char input_char_array[][horizontal_count + 1]) {
  int is_there_any_dot = 0;
  int is_sharp_all = 0;
  for (int i = 0; i < vertical_count; ++i) {
    if (is_there_any_dot == 1) {
      break;
    }
    for (int j = 0; j < horizontal_count; ++j) {
      if (is_there_any_dot == 1) {
        break;
      }

      if (input_char_array[i][j] == '.') {
        is_there_any_dot = 1;
      }
    }
  }
  if (is_there_any_dot == 0) {
    is_sharp_all = 1;
  }

  return is_sharp_all;
}

int main() {
  int vertical_count;
  int horizontal_count;

  // standard input
  if (scanf("%d%d", &vertical_count, &horizontal_count) == 0) {
    return 1;
  }

  char horizontal_input_char_array[horizontal_count + 1];
  char input_char_array[vertical_count][horizontal_count + 1];
  char to_be_sharp_array[vertical_count][horizontal_count + 1];
  for (int i = 0; i < vertical_count; ++i) {
    if (scanf("%s", horizontal_input_char_array) == 0) {
      return 1;
    }
    strcpy(input_char_array[i], horizontal_input_char_array);
  }

  for (int i = 0; i < vertical_count; ++i) {
    for (int j = 0; j <= horizontal_count; ++j) {
      if (j == horizontal_count) {
        to_be_sharp_array[i][j] = '\0';
      } else {
        to_be_sharp_array[i][j] = '.';
      }
    }
  }

  int try_count = 0;
  while(is_finished(vertical_count, horizontal_count, input_char_array) == 0) {
    try_count += 1;

    for (int i = 0; i < vertical_count; ++i) {
      for (int j = 0; j < horizontal_count; ++j) {
        if (input_char_array[i][j] == '#') {
          if (i - 1 >= 0) {
            to_be_sharp_array[i - 1][j] = '#';
          }
          if (j - 1 >= 0) {
            to_be_sharp_array[i][j - 1] = '#';
          }
          if (j + 1 < horizontal_count) {
            to_be_sharp_array[i][j + 1] = '#';
          }
          if (i + 1 < vertical_count) {
            to_be_sharp_array[i + 1][j] = '#';
          }
        }
      }
    }

    for (int i = 0; i < vertical_count; ++i) {
      for (int j = 0; j < horizontal_count; ++j) {
        if (to_be_sharp_array[i][j] == '#') {
          input_char_array[i][j] = '#';
        }
      }
    }
  }

  printf("%d\n", try_count);
  return 0;
}
