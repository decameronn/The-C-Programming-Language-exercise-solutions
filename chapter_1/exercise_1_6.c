
#include <stdio.h>

int main(void) {

  /**
   * to verify the value of the expression "getchar() != EOF"
   * we simply print it as a regular int on the console:
   * if value = 0, then it is EOF
   * otherwise it is not
   */

  printf("Value of expression \"getchar() != EOF\" is %d\n", getchar() != EOF);

  return (0);
}