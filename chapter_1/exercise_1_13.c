
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

  word_len = MIN_WORD_LEN; /* don't count spaces */
  state = OUTSIDE_WORD;

  /* horizontal rows */
  /* TODO
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
    word_len = 1 (start counting again the length of the word)
  */

  

  /* verical columns */
  /*
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      if (word_len > MAX_WORD_HEIGHT) {
        word_len = MAX_WORD_HEIGHT;
      }
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
  */

  return (0);
}