#include <stdio.h>

/**
 * Note: we take into account only a limited part of ASCII set.
 * ASCII set includes a total of 256 symbols (0 - 255).
 * Check them at http://www.asciitable.com/
 * The reason we define ASCII_INPUT to be 94 is because the symbols
 * that we are actually printing are in range 33 - 126.
 */
#define MAX_ITEMS 94

int main(void) {

  /**
   * Exercise 1-14. Write a program to print a histogram of the frequencies
   * of different characters in its input.
   */

  int c;
  int i, j;
  int freq_max_len;
  int freq[MAX_ITEMS];

  /** (0) initialize the data */
  freq_max_len = 0;
  for (i = 0; i < MAX_ITEMS; ++i) freq[i] = 0;

  /** (1) determine input range */
  while ((c = getchar()) != EOF) {
    /**
     * The explanation for freq[c - '!'] below is similar to the example
     * in the K&R book, chapter 1.6 Arrays. But basically, with this neat trick
     * we determine the array index of the input by subtracting 
     * the first value (decimal) in the range that is of interest to us.
     * ex.: if you type letter 'f', its value in ASCII is 102.
     * therefore 102 - 33 = 69
     * thus we increase value in the array at index 69:  ++freq[69]
     * 
     * I admit, finding out this trick was quite an experience.
     */
    if (c >= '!' && c <= '~') {
      ++freq[c - '!'];
      /* calculate the column height */
      if (freq[c - '!'] >= freq_max_len) freq_max_len = freq[c - '!'];
    }
  }

  /** (2) print the results (vertical histogram) */
  for (i = freq_max_len; i >= 0; --i) {
    for (j = 0; j <= (MAX_ITEMS - 1); ++j) {
      if (freq[j] >= i) printf("*");
      else printf(" ");
    }
    printf("\n");
  }
  for (i = 0; i <= (MAX_ITEMS -1); ++i) {
    printf("%c", i + '!');
  }
  printf("\n");

  return (0);
}



















