/**
 * Exercise 1-18. Write a program to remove trailing blanks 
 * and tabs from each line of input, and to delete entirely blank lines.
 */

#include <stdio.h>

int getline(char line[], int len);

int main(int argc, char const *argv[]) {
  /* code */
  return 0;
}

int getline(char line[], int len) {
  int i, c;

  for (i = 0; i < (len - 1) && (c = getchar()) != EOF && c != '\n'; ++i) {
    line[i] = c;
  }
  if (c == '\n') {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
  return i;
}