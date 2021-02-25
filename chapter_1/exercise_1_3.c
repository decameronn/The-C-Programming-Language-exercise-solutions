
#include <stdio.h>

int main(void) {

	float fahr, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	printf("**********************\n");
	printf(" Fahrenheit | Celsius\n");
	printf("**********************\n");

	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0f / 9.0f) * (fahr - 32.0f);
		printf("%6.0f %13.1f\n", fahr, celsius);
		fahr += step;
	}

  return (0);
}