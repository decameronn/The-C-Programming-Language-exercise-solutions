
#include <stdio.h>

#define min 1
#define max 3

int main(void) {

  int i, j;
  int arr[max];
  int wc = 0;
  int c;
  
  for (i = 0; i < max; ++i) arr[i] = 0;
  
  while((c = getchar()) != EOF) {
    putchar(c);
    ++wc;
    
    if (c == ' ' || c == '\t' || c == '\n') --wc;
    if (wc >= min && wc <= max) ++arr[wc];
  }

  for (i = min; i <= max; ++i) {
    printf("%3d > ", i);
    for (j = 0; j < arr[i]; ++j) {
        printf("*");
    }
    printf("\n");
  }

  return (0);
}