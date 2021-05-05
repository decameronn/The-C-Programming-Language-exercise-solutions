/**
 * Exercise 1-17. Write a program to print all input lines that are longer
 * than 80 characters.
 */

#include <stdio.h>

#define MAXLEN 1000
#define CURLEN 80

int getline(char s[], int len);
void copy(char to[], char from[]);

int main(void) {
  /**
   * while (there's a line)
   *  if (current line's len > 80)
   *    save current line
   *    print current line
   */

  int len = 0;
  int desired_len = 0;
  int num_of_lines = 0;
  char line[MAXLEN] = {0};
  char desired_line[MAXLEN] = {0};

  while ((len = getline(line, MAXLEN)) > 0) {
    if (len > CURLEN) {
      desired_len = len;
      ++num_of_lines;
      copy(desired_line, line);
    }
    if (desired_len > CURLEN) {
      printf("%s\n", desired_line);
    }
  }
  printf("Number of lines greater than 80 columns is: [%d]: ", num_of_lines);

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

/* copy "from" into "to"; assume "to" is big enough */
void copy(char to[], char from[]) {
  int i = 0;
  while ((to[i] = from[i]) != '\0') {
    ++i;
  }
}