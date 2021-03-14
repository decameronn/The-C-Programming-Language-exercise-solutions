
#include <stdio.h>

#define MAX_WORD_HEIGHT 100
#define MAX_WORD_LEN    10
#define MIN_WORD_LEN    1

#define INSIDE_WORD  1
#define OUTSIDE_WORD 0

int main(void) {
  int c;
  int x, y;
  int state;
  int word_start, word_end, word_len;
  int histogram[MAX_WORD_LEN][MAX_WORD_HEIGHT];

  word_start = word_end = word_len = 0;
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
      word_len = c;
      ++word_len;
    }
  }

  /* FIXME
  if c != space/tab/n, then
    ++word_len
  word_len = the actual x index (position on x axis)

  check for whitespace as start/end for words in such as way
  that it shouldn't matter whether we start the input with a
  whitespace or not

  = don't increase x, just switch to that position
  = increase y at that position
  */

  for (x = 0; x < MAX_WORD_LEN; ++x) {
    for (y = 0; y < MAX_WORD_HEIGHT; ++y) {
      histogram[x][y] = 0;
      printf(" %d ", histogram[x][y]);
    }
    printf("\n");
  }

  return (0);
}