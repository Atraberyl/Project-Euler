#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

//What is the 10 001st prime number

#define TARGET 10001

bool is_Prime (unsigned long long prime)
//check if prime if a Prime
{
  unsigned long sq_root = floor(sqrt(prime));

  if (prime == 1) return false;
  for (int i = 2; i <= sq_root; i++)
  {
    if (prime % i == 0) return false;
  }
  return true;
}

int main(int argc, char *argv[])
{
  int i = 1, count = 0;
  
  while (1)
  {
    if (is_Prime(i) == true) count++;
    if (count == TARGET)
      {
	printf("%d %d\n", count, i);
	break;
      }
    i++;
  }
  
  return 0;
}
