
#include <stdio.h>

int main(void) {

  /**
   * 1. check if c is different than EOL
   *  - it's important to check this inside while condition
   *  - otherwise we'll check only once and the program will get stuck
   * 2. if it is, then:
   *  - if character is new line or blank space or tab 
   *  - increase nl, bl and tab by one accordingly
   * 3. if c is equal to EOL
   *  - print the total number of nl, bl and tab accumulated so far
   *  - exit the program
   */
  int c;
  int nl, bl, tab;

  nl = bl = tab = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n') ++nl;
    if (c == ' ') ++bl;
    if (c == '\t') ++tab;
  }
  printf("Newlines = [%d], Blank spaces = [%d], Tabs = [%d]\n", nl, bl, tab);
  
  return (0);
}