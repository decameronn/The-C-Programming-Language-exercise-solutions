#include <stdio.h>

#define MIN_INPUT 1
#define MAX_INPUT_TYPES 36
#define EXIT_SUCCESS 0
#define EXIT_FAILURE -1

#ifndef log_error(x)
#define log_error(x)                                     \
  printf("Program encountered an error. Quitting...\n"); \
  return EXIT_FAILURE
#endif

int main(void) {
  /**
   * Exercise 1-14. Write a program to print a histogram of the frequencies
   * of different characters in its input.
   */

  int c;
  int i, j;
  int chars, blanks, nums;
  int total;
  int freq[MAX_INPUT_TYPES];

  /** (0) initialize the data */
  chars = blanks = nums = total = 0;
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
  
  /** horizontal histogram */
  for (i = MIN_INPUT; i <= MAX_INPUT_TYPES; ++i) {
    if (c != ' ' || c != '\t' || c != '\n') {
      printf("%d", i);
    }
    printf("\n");
  }


  return EXIT_SUCCESS;
}
