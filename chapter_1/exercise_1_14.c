#include <stdio.h>

#define MAX_INPUT_TYPES 36
#define EXIT_SUCCESS 0
#define EXIT_FAILURE -1

int main(void) {
  /**
   * Exercise 1-14. Write a program to print a histogram of the frequencies
   * of different characters in its input.
   *
   * if input == some_input
   *  ++arr[some_input] && print it
   * if input != some_input
   *  just ignore it && do not print it
   */

  int c;
  int i, j;
  int chars, blanks, nums;
  int freq[MAX_INPUT_TYPES];

  /** (0) initialize the data */
  chars = blanks = nums = 0;
  for (i = 0; i < MAX_INPUT_TYPES; ++i) freq[i] = 0;

  /** (1) determine the input type */
  while ((c = getchar()) != EOF) {
    putchar(c);
    if (c >= '0' && c <= '9') {
      ++freq[c - '0'];
    }
    else if (c == ' ' || c == '\t' || c == '\n') {
      ++blanks;
    }
    else {
      ++chars;
    }
  }

  return EXIT_SUCCESS;
}
