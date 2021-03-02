
#include <stdio.h>

#define INSIDE 1
#define OUTSIDE 0

int main(void) {

  int c, nl, nw, nc, state;

  state = OUTSIDE;
  nl = nw = nc = 0;

  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n') {
      ++nl;
    }
    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUTSIDE;
    } 
    else if (state == OUTSIDE) {
      state = INSIDE;
      ++nw;
    }
  }
  printf("lines: [%d], words: [%d], chars: [%d]", nl, nw, nc);

  return (0);
}

/**
 * 1. use a single word that's larger than an int
 * 2. use a large number of whitespaces (larger than int) 
 * 2. use zero words, characters, etc
 */