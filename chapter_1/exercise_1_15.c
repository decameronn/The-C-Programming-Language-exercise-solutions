#include <stdio.h>

#define MAX 300
#define MIN 0
#define STEP 20

void fahr_to_celsius(void);

int main(void) {
  /* Exercise 1-15. Rewrite the temperature conversion program of Section 1.2 to
  use a function for conversion. */

  fahr_to_celsius();

  return 0;
}

void fahr_to_celsius(void) {
  float fahr, celsius;

  printf("**********************\n");
  printf(" Fahrenheit | Celsius\n");
  printf("**********************\n");

  fahr = MIN;
  while (fahr <= MAX) {
    celsius = (5.0f / 9.0f) * (fahr - 32.0f);
    printf("%6.0f %13.1f\n", fahr, celsius);
    fahr += STEP;
  }
}