#include <stdio.h>

int main()
{
  int i, j, k;
  i = j = 0;
  for (; i < 10; i++)
    j = i;
  printf("%d %d", i, j);
  return 0;
}