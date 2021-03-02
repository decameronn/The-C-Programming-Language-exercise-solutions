
#include <stdio.h>

int main(void) {

  /**
   * keep in mind that running this in the terminal
   * won't display '\b', as OS handles this, effectively
   * deleting the character instead of displaying it.
   * you have to pipe the output to a file if you
   * want to test that.
   */

  int c;
  
  while ((c = getchar()) != EOF) {
    if (c == '\t') printf("\\t");
    if (c == '\b') printf("\\b");
    if (c == '\\') printf("\\");
    putchar(c);
  }

  return (0);
}