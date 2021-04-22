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

  /* some code */

  return 0;
}

int getline(char line[], int maxline) {
  int c, i;
  for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    line[i] = c;
  }
  if (c == '\n') {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
  return i;
}