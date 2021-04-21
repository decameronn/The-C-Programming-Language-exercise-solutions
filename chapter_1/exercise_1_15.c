/** this is not exercise 1-15.
 * this is the example from chapter 1.7 */

#include <stdio.h>

int power(int, int);

int main(void) {
  int i;
  for (i = 0; i < 10; ++i) {
    printf("%d %d %d\n", i, power(2, i), power(-3, i));
  }

  return 0;
}

/** n >= 0 */
int power(int base, int n) {
  int i, p;
  p = 1;

  for (i = 1; i <= n; ++i) {
    p = p * base;
  }
  return p;
}