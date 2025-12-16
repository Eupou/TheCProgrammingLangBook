#include <stdio.h>

/*
  Exercise 2-5. Write the function any(s1,s2), which returns the first location in a string s1
  where any character from the string s2 occurs, or -1 if s1 contains no characters from s2.
  (The standard library function strpbrk does the same job but returns a pointer to the
  location.) 
*/

int any(char str1[], char str2[]);

int main() {
  char str1[] = "ooooooooae";
  char str2[] = "xyisnsnpqj";

  printf("%d", any(str1, str2));

  return 0;
}

int any(char str1[], char str2[]) {
   for (int i = 0; i < 10; i++) { // s2
    for (int j = 0; j < 10; j++) { // s1
      if (str2[i] == str1[j]) {
        return j;
      }
    }
  }

  return -1;
}