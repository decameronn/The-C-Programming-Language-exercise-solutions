/**
 * Exercise 1-16. Revise the main routine of the longest-line program
 * so it will correctly print the length of arbitrarily long input lines
 * and as much as possible of the text.
 */

#include <stdio.h>

#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main(void) {
  int len;                    /* current line len */
  int maxlen;                 /* max len seen so far */
  char line[MAXLINE];         /* current line */
  char longest_line[MAXLINE]; /* max line saved so far */

  len = maxlen = 0;

  while ((len = getline(line, MAXLINE)) > 0) {
    if (len > maxlen) {
      maxlen = len;
      copy(longest_line, line);
    }
    printf("The length is:\t%d\n", len);
  }
  if (maxlen > 0) {
    printf("%s", longest_line);
  }

  return (0);
}

/* read a line into line[], return the length */
int getline(char line[], int len) {
  int c, i;
  for (i = 0; i < len - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    line[i] = c;
  }
  if (c == '\n') {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
  return i;
}

/* copy "from" into "to"; assume "to" is big enough */
void copy(char to[], char from[]) {
  int i = 0;
  while ((to[i] = from[i]) != '\0') {
    ++i;
  }
}