/**
 * @brief   Scratchpad for Chapter 1
 * @author  Decameron
 */

/*
while (there's another line)
  if (current_line_len > prev_line_len)
    save current_line
    save current_line_len
  print longest line
*/

#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main(void) {

  int len, max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  while ((len = getline(line, MAXLINE)) > 0) {
    if (len > max) {
      max = len;
      copy(longest, line);
    }
    if (max > 0) printf("%s", longest);
  }

  return 0;
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