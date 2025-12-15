#include <stdio.h>

/*
Exercise 1-13. Write a program to print
a histogram of the lengths of words in
its input. It is easy to draw the
histogram with the bars horizontal;
a vertical orientation is more
challenging. 
*/

// determine whether we are in a word or not ok
// count each caracter until out of the word ok
// use an array to save the word length  ok

/*
 1 1 1 1  1  1  1
  



1(2=7)3456789

maxSize 

maxSize > lenght 
  nao printa
else 
  printa

maxSize--

*/

// a = 3, b = 4
// a = 0


int main() {
  int words[10] = {0};
  int wordLength = 0;
  char c = '\0';

  while(c != EOF) {

    c = getchar();

    if (c == ' ' || c == '\t' || c == '\n') {
      if (wordLength > 0) {
        ++words[wordLength];
        wordLength = 0;
      }
    } else {
      wordLength++;
    }
  }

  // horizontal print
  // for (int i = 9; i > 0; i--) {
  //   printf("%d ", i);

  //   for (int j = 0; j < words[i]; j++) {
  //     printf("*");
  //   }

  //   printf("\n");
  // }

  
  // vertical print
  int maxLenght = words[1];
  for (int i = 2; i < 10; i++) {
    if (words[i] > maxLenght) {
      maxLenght = words[i];
    }
  }

  for(int level = maxLenght; level > 0; level--) {
    for (int j = 1; j < 10; j++) {
      if (level > words[j]) {
        printf(" ");
      } else {
        printf("*");
      }
    }
    printf("\n");
  } 

  printf("123456789");

  return 0;
}