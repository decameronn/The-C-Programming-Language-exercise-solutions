
#include <stdio.h>

int main(void) {
  printf("I\cTest\cThe\cSequence\c");
  /** 
   * The line above triggers compiler to complain about escape sequence '\c'
   * because it doesn't recognize it.
   */

  return (0);
}
