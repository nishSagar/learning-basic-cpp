#include <stdio.h>

int main()
{
  int x = 8;
  int y = 3;
  int x = (x % y != 0) ? (x % y) : (x / y);
  printf("%d", x);

  return 0;
}