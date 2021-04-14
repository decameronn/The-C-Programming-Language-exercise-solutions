#include <stdio.h>

#define MAX_FREQUNECY 100
#define MAX_INPUT_TYPES 36

int main(void) {
  /**
   * Exercise 1-14. Write a program to print a histogram of the frequencies
   * of different characters in its input.
   *
   * We assume only the ANSI input. If the input != ANSI, we ignore it.
   */

  int c;
  int i, j;
  int freq[MAX_INPUT_TYPES];

  for (i = 0; i < MAX_INPUT_TYPES; ++i) freq[i] = 0;

  while ((c = getchar()) != EOF) {
    putchar(c);
    if ((c >= 'a' && c <= 'z') && (c >= 'A' && c <= 'Z')) {
      // ++chars;
    }
    else if (c >= '0' && c <= '9') {
      // ++nums;
    }
    else {
      // ++blanks;
    }
  }

  printf("%d\n", sizeof(unsigned long int));

  return (0);
}