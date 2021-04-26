/**
 * Exercise 1-17. Write a program to print all input lines that are longer 
 * than 80 characters.
 */

#include <stdio.h>

#define MAXLINE       1000
#define EXIT_SUCCESS  0
#define EXIT_FAILURE  1

int getline(char s[], int len);
void copy(char to[], char from[]);

int main(void) {

/**
 * while (there's a line)
 *  if (current line's len > 80)
 *    save current line
 *    print current line
 */

  int len;

  char line[MAXLINE] = {0};
  len = getline(line, MAXLINE);

  while (len > 80) {
    printf("%s\n", line);

    if (len <= 80) {
      printf("Line shorter than 80 characters. Exiting...\n");
      return EXIT_FAILURE;
    }
  }

  return EXIT_SUCCESS;
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