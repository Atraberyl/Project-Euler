#include <stdio.h>

#define TARGET_NUMBER 1000

int main(int argc, char *argv[])
{
  int count = 0;
  for (int i=0; i < TARGET_NUMBER; i++)
  {
    if ((i % 3 == 0) || (i % 5 == 0)) count+= i;
  }
  printf("%d\n", count);
  return 0;
}


