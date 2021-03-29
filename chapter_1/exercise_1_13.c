
#include <stdio.h>

#define MAX_WORD_LEN 10
#define MIN_WORD_LEN 1

#define INSIDE_WORD 1
#define OUTSIDE_WORD 0

int main(void) {
  /** horizontal rows:
   *
   * while c = getchar
   *   then putchar(c) : print the output as well (optional)
   *   word_len++ : count the numbers of letters
   *   if word_len > MAX_WORD_LEN
   *     then word_len = MAX_WORD_LEN :
   *            don't count more than 10 letters in a word (customizable)
   *   if c == space
   *     if state == OUTSIDE
   *       word_len-- : don't count whitespace
   *       then state = INSIDE
   *      if word_len is larger than MIN and lower than MAX
   *        increase the word count at word_len index
   *      word_len = 0 :start counting again the length of the word
   *
   * print the results
   */

  int c;
  int x, y;
  int state;
  int word_len;
  int histogram[MAX_WORD_LEN];

  word_len = 0;
  state = OUTSIDE_WORD;
  for (x = MIN_WORD_LEN; x <= MAX_WORD_LEN; ++x) {
    histogram[x] = 0;
  }

  while ((c = getchar()) != EOF) {
    putchar(c);
    ++word_len;
    if (word_len > MAX_WORD_LEN) {
      word_len = MAX_WORD_LEN;
    }

    if (c == ' ' || c == '\t' || c == '\n') {
      state = OUTSIDE_WORD;
      --word_len;
    }
    if (state == OUTSIDE_WORD) {
      state = INSIDE_WORD;
      if (word_len >= MIN_WORD_LEN && word_len <= MAX_WORD_LEN) {
        ++histogram[word_len]; /* this was *hard* to recall */
      }
      word_len = 0;
    }
  }

  for (x = MIN_WORD_LEN; x <= MAX_WORD_LEN; ++x) {
    printf(" %3d > ", x);
    for (y = 0; y < histogram[x+1]; ++y) { /* print * at index h[x] */
      printf(" * ");
    }
    printf("\n");
  }

  return (0);
}