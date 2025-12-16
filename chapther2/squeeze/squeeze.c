#include <stdio.h>
/*
  Exercise 2-4. Write an alternative version of squeeze(s1,s2) that deletes each character in
  s1 that matches any character in the string s2
*/

void squeeze(char str1[], char str2[]);

char string1[] = "peixe";
char string2[] = "ponte";


int main () {
  squeeze(string1, string2);
  printf("%s", string1);
  return 0;
}

void squeeze(char str1[], char str2[]) {
  for (int i = 0; i < 6; i++) { // s2
    for (int j = 0; j < 6; j++) { // s1
      if (str2[i] == str1[j]) {
        str1[j] = ' ';
      }
    }
  }
  
  str1[6] = '\0';
}

