#include <stdio.h>

//Find the sum of all the multiples of 3 or 5 below 1000

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


