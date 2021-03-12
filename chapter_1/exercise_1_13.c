
#include <stdio.h>

#define MAX_WORD_HEIGHT 10
#define MAX_WORD_LEN 10
#define MIN_WORD_LEN 1

int main(void) {
  int c;
  int x, y;
  int word_start, word_end, word_len;
  int histogram[MAX_WORD_LEN][MAX_WORD_HEIGHT];

  word_len = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      ++word_start;
    }
    else if (word_len >= MIN_WORD_LEN && word_len <= MAX_WORD_LEN) {
      if (word_len == 3) {
        x = word_len;
        ++y;
      }
    }

    /* FIXME
    if word_len == 1 then x == 1, y++ (=1)
    if word_len == 2 then x == 2 (at position 2), y++ (increase y) = 1
    if word_len == 2 then x == 2 (at position 2), y++ (increase y) = 2
    if word_len == 2 then x == 2 (at position 2), y++ (increase y) = 3

    word_len = ? (take c into account)
    word_len = the actual x index (position on x axis)

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