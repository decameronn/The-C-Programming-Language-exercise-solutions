
#include <stdio.h>

#define HISTOGRAM_LEN 10
#define MAX_WORD_LEN 10
#define MIN_WORD_LEN 1

int main(void) {
  int c;
  int x, y;
  int word_len;  // counter for length of input words
  int histogram[MAX_WORD_LEN][HISTOGRAM_LEN];

  word_len = 0;

  for (x = 0; x < MAX_WORD_LEN; ++x) {
    for (y = 0; y < HISTOGRAM_LEN; ++y) {
      histogram[x][y] = 0;
      printf(" %d ", histogram[x][y]);
    }
    printf("\n");
  }
}