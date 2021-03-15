
#include <stdio.h>

#define MAX_WORD_HEIGHT 10
#define MAX_WORD_LEN 10
#define MIN_WORD_LEN 1

#define INSIDE_WORD 1
#define OUTSIDE_WORD 0

int main(void) {
  int c;
  int x, y;
  int state;
  int word_len;
  int histogram[MAX_WORD_LEN][MAX_WORD_HEIGHT];

  word_len = 0;
  state = OUTSIDE_WORD;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      if (state == INSIDE_WORD) {
        state = OUTSIDE_WORD;
        x = word_len;
        ++y;
      }
    } else if (state == OUTSIDE_WORD) {
      state = INSIDE_WORD;
      ++word_len;
    }
  }

  for (x = 0; x < MAX_WORD_LEN; ++x) {
    for (y = 0; y < MAX_WORD_HEIGHT; ++y) {
      // histogram[x][y] = 0;
      printf(" %d ", histogram[x][y]);
    }
    printf("\n");
  }

  return (0);
}