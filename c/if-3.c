#include <stdio.h>

int main()
{
  int a = 1, b = 1, x;
  a += b;
  x = -a++ + ++b;
  printf("%d", x);
  return 0;
}