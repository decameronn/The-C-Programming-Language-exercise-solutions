
#include <stdio.h>

#define MAX_WORD_LEN 10
#define MIN_WORD_LEN 1

#define INSIDE_WORD 1
#define OUTSIDE_WORD 0

int main(void) {
  int c;
  int x, y;
  int state;
  int word_len, blank_len;
  int histogram[MAX_WORD_LEN];

  word_len = 0;
  blank_len = 0;
  state = OUTSIDE_WORD;
  for (x = MIN_WORD_LEN; x <= MAX_WORD_LEN; ++x) {
    histogram[x] = 0;
  }

  while ((c = getchar()) != EOF) {
    putchar(c);

    if (c != ' ' || c != '\t' || c != '\n') {
      state = INSIDE_WORD;
      ++word_len;
      if (word_len > MAX_WORD_LEN) {
        word_len = MAX_WORD_LEN;
      }
    }

    if (c == ' ' || c == '\t' || c == '\n') {
      state = OUTSIDE_WORD;
      ++blank_len;
    }
    if (state == OUTSIDE_WORD) {
      if (word_len >= MIN_WORD_LEN &&
          word_len <= MAX_WORD_LEN) { /* might need to add +1 to MAX to print
                                         properly */
        ++histogram[word_len];
      }
      word_len = 0;
    }
  }

  for (x = MIN_WORD_LEN; x <= MAX_WORD_LEN; ++x) {
    printf(" %2d > ", x);
    for (y = 0; y < histogram[x]; ++y) {
      printf(" * ");
    }
    printf("\n");
  }

  return (0);
}