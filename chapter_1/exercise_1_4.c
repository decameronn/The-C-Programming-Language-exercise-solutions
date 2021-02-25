
#include <stdio.h>

int main(void) {

	float fahr, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	printf("**********************\n");
	printf(" Celsius | Fahrenheit\n");
	printf("**********************\n");

	celsius = lower;
	while (celsius <= upper) {
		fahr = (celsius * (9.0f / 5.0f)) + 32.0f;
		printf("%5.0f %11.0f\n", celsius, fahr);
		celsius += step;
	}

  return (0);
}