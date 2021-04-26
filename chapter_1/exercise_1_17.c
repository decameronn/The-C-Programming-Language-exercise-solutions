/**
 * Exercise 1-17. Write a program to print all input lines that are longer
 * than 80 characters.
 */

#include <stdio.h>

#define MAXLEN 80
#define MINLEN 1
#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

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
  volatile int short_len = 0;
  char line[MAXLEN] = {0};

  while ((len = getline(line, MAXLEN)) > 0) {
    ++len;
    
    if (len > MAXLEN) {
      printf("%s\n", line);
    }
    // else if (len >= MINLEN && len <= MAXLEN) {
    //   short_len = len;
    //   printf("Line shorter than 80 characters.\n");
    // } 

    // if (len >= MINLEN && len <= MAXLEN) {
    //   printf("Line shorter than 80 characters. Exiting...\n");
    //   return EXIT_FAILURE;
    // } 
    // else if (len > MAXLEN) {
    //   printf("%s\n", line);
    // } 
    // else {
    //   return EXIT_FAILURE;
    // }
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