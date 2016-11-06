#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20

bool is_evenly_divisible(int to_check)
//check if to_check is divisible by numbers from 1 to 20 without remainder
{
  bool value = true;
  
  for (int i = 1; i <= 20; i++)
  {
    if ((to_check % i) == 0) value *= true;
    else value *= false;
  }
  return value;
}

int main(int argc, char *argv[])
{
  for (unsigned int i = 21;; ++i)
  {
    //printf("%d\n", i);
    if (is_evenly_divisible(i) == true)
      {
	printf("\n%d\n", i);
	break;
      }
  }

  return 0;
}
