
#include <stdio.h>

int main(void) {

  int c;

  while ((c = getchar()) != EOF) {
    putchar(c);
    if (c == ' ' || c == '\t') {
      c = '\n';
      putchar(c);
    }
  }

  return (0);
}