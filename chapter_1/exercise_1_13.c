
#include <stdio.h>

#define MAX_WORD_LEN 10
#define MIN_WORD_LEN 1

#define INSIDE_WORD 1
#define OUTSIDE_WORD 0

int main(void) {
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

  /* horizontal rows */
  /*
  if we encounter a space
    (optional) then change the state to OUTSIDE
    count the number of letters so far
    for loop through array
      if array[index] == number of letters
      print the index
  (optional) change the state to INSIDE

  while c = getchar
    then putchar(c)
    word_len++
    if c == space
      if state == OUTSIDE
        then state = INSIDE
    if word_len > MAX_WORD_LEN
      then word_len = MAX_WORD_LEN
    for ; word_len < MAX_WORD_LEN; word_len++
      print histogram[word_len+1]
    word_len = 0 (start counting again the length of the word)
  */

  /* FIXME */
  while ((c = getchar()) != EOF) {
    putchar(c);
    ++word_len;
    if (c == ' ' || c == '\t' || c == '\n') {
      state = OUTSIDE_WORD;
      --word_len;
    }
    if (state == OUTSIDE_WORD) {
      state = INSIDE_WORD;
      if (word_len >= MIN_WORD_LEN && word_len <= MAX_WORD_LEN) {
        ++histogram[word_len]; /* !!! this was *hard* !!! */
      }
      word_len = 0; /* reset word counter */
    }
  }

  for (x = MIN_WORD_LEN; x <= MAX_WORD_LEN; ++x) {
    printf(" %3d > ", x);
    for (y = 0; y < histogram[x]; ++y) { /* check the word_len for horizontal row */
      printf("%d", y);
    }
    printf("\n");
  }

  return (0);
}