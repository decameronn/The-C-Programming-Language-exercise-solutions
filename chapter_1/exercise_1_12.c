
#include <stdio.h>

#define INSIDE_THE_WORD   1
#define OUTSIDE_THE_WORD  0

int main(void) {

  /**
   * We're using Finite State Machine concept:
   * INSIDE_THE_WORD: a state in which we print every input character
   * OUTISDE_THE_WORD: a state we switch to when the input is 
   *  either a space or a tab character (common separators between words).
   *  In this case, we convert space or \t into a \n, but don't do
   *  anything else.
   * If, again, input is different from space or tab, we go back
   * to the initial state and resume our printing.
   * Not printing explicitly \t character is by design.
   */

  int c;
  int state;

  state = OUTSIDE_THE_WORD;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t') {
      if (state == INSIDE_THE_WORD) {
        state = OUTSIDE_THE_WORD;
      }
      c = '\n';
    }
    else if (state == OUTSIDE_THE_WORD) {
      state = INSIDE_THE_WORD;
    }
    putchar(c);
  }

  return (0);
}