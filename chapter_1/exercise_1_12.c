
#include <stdio.h>

int main(void) {

  int c;git a

  while ((c = getchar()) != EOF) {
    putchar(c);
    if (c == ' ' || c == '\t') {
      c = '\n';
      putchar(c);
    }
  }

  return (0);
}