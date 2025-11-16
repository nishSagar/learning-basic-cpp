#include <stdio.h>

int main()
{
  int x = 1, y = 1, z = 0;
  if (x != 0)
    y++, z++;
  if (y == 0)
    z++;
  else
    z--;
  printf("%d %d", y, z);
  return 0;
}