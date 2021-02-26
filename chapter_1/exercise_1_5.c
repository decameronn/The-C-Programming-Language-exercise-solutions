
#include <stdio.h>

#define MAX 300
#define MIN 0
#define STEP 20

int main(void) {

  /**
   * start counting downwards from 300
   *  1. as long as fahr is greater than or equal to zero
   *  2. print fahr value and celsius value (calculated inside the expression)
   *  3. decrement fahr value by 20 at each step
   */
  int fahr;
  for (fahr = MAX; fahr >= MIN; fahr -= STEP) {
    printf("%3d %5.1f\n", fahr, (5.0/9.0) * (fahr - 32));
  }

  return (0);
}