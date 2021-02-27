
#include <stdio.h>

int main(void) {

  /**
   * while c = getchar
   *  print c
   *  if c is blank
   *    as long as next c is also blank, don't do anything
   *    print the first encountered blank
   */

  int c;
  while ((c = getchar()) != EOF) {
    putchar(c);
    if (c == ' ') {
      while ((c = getchar()) == ' ') { ; }
      putchar(c);
    }
  }

  return (0);
}