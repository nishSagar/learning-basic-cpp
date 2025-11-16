#include <stdio.h>
#define N 5

int main(void)
{
  // printf("Hello World!\n");
  int i;
  for (i = 0; i < 5; i++) {
    if (i == 2) {
      continue;
    }
    printf("%d", i);
  }
  return 0;
}

