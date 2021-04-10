
#include <stdio.h>

#define MAX_WORD_LEN 10
#define MIN_WORD_LEN 1
#define MIN_COLUMN_HEIGHT 1
#define MAX_COLUMN_HEIGHT 10

#define INSIDE_WORD 1
#define OUTSIDE_WORD 0

int main(void) {
  /**
   * HORIZONTAL HISTOGRAM
   * create an array, arr.length == len of the longest accepted word
   * at each index, store word lengths corresponding to that index
   * count word len:
   *  define a counter to store the value
   *  as long as input is not a blank, counter++
   * increase array index:
   *  if we hit a blank, we increase the index at counter position
   *  once we did that, we reset the counter and start counting again
   * if the word len is larger than the defined value (10), normalize it
   * at max value (or discard it)
   * print:
   *  first we print the array of lengths of words
   *  after that, we iterate this array and print a given symbol (say, *)
   *  that matches the number saved at that index (if we have 3 words
   *  4 letters long each, we print arr[4] ***)
   *
   * VERTICAL HISTOGRAM
   * count & print the items on each column
   *  if count > 0, print the columns, one at a time
   *  if count == 0, just print a blank space
   * print the histogram position below the columns
   *  it's the usual printing, but the catch is to play with the
   *  spacing such that the numbers will fit directly below the columns
   */

  int c;
  int x, y;
  int state;
  int word_len, blank_len;
  int histogram[MAX_WORD_LEN + 1];

  word_len = 0;
  blank_len = 0;
  state = OUTSIDE_WORD;
  for (x = MIN_WORD_LEN; x <= MAX_WORD_LEN; ++x) {
    histogram[x] = 0;
  }

  while ((c = getchar()) != EOF) {
    putchar(c);

    if (c != ' ' && c != '\t' && c != '\n') {
      state = INSIDE_WORD;
      ++word_len;
      if (word_len >= MAX_WORD_LEN) {
        word_len = MAX_WORD_LEN;
      }
    }

    if (c == ' ' || c == '\t' || c == '\n') {
      state = OUTSIDE_WORD;
      ++blank_len;
    }
    if (state == OUTSIDE_WORD) {
      if (word_len >= MIN_WORD_LEN && word_len <= MAX_WORD_LEN) {
        ++histogram[word_len];
      }
      word_len = 0;
    }
  }

  printf("\nHORIZONTAL HISTOGRAM\n");
  for (y = MIN_WORD_LEN; y <= MAX_WORD_LEN; ++y) {
    printf(" %2d > ", y);
    for (x = MIN_WORD_LEN; x <= histogram[y]; ++x) {
      printf(" * ");
    }
    printf("\n");
  }

  /* BUG This only works if MAX_WORD_LEN == MAX_COLUMN_HEIGHT 
   * Check the data against the printing part
   */
  printf("\nVERTICAL HISTOGRAM\n");
  for (x = y; x > 0; --x) {
    for (y = MIN_COLUMN_HEIGHT; y <= MAX_COLUMN_HEIGHT; ++y) {
      if (histogram[y] >= x)
        printf(" *");
      else
        (printf("  "));
      printf("  ");
    }
    printf("\n");
  }
  for (x = MIN_WORD_LEN; x <= MAX_WORD_LEN; ++x) {
    printf("%2d  ", x);
  }

  return (0);
}