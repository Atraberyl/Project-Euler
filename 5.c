#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

bool is_evenly_divisible(int to_check)
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
