/**
 * Exercise 1-17. Write a program to print all input lines that are longer
 * than 80 characters.
 */

#include <stdio.h>

#define MAXLEN 1000
#define CURLEN 80

int getline(char s[], int len);

int main(void) {
  int len = 0;
  int num_of_lines = 0;
  char line[MAXLEN] = {0}; /* C99 and later */

  while ((len = getline(line, MAXLEN)) > 0) {
    /* FIXME This needs better handling. */
    if (len > MAXLEN) {
      printf("Line is longer than 1000 characters. Aborting...\n");
      return -1;
    } 
    else if (len > CURLEN && len <= MAXLEN) {
      ++num_of_lines;
      printf("%s", line);
    } 
    else { /* do nothing */ }
  }
  printf("\nNumber of lines greater than 80 columns is: [ %d ]: ",
         num_of_lines);

  return (0);
}

/* read a line into s[], return the length */
int getline(char s[], int len) {
  int c, i;
  for (i = 0; i < len - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}