#include <stdio.h>

int power(int m, int n);

int main() {
  printf("%d\n%d", power(0, 2), power(0, 0));
  
  return 0;
}

int power(int m, int n) {
  if (n == 0) return 1;
  if (n == 1) return m;
  return m * power(m, n - 1);
}


