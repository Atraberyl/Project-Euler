#include <stdio.h>
#include <stdbool.h>
#include <math.h>

//What is the largest prime factor of the number 600851475143

#define NUMBER 600851475143

bool is_Prime (unsigned long prime)
//check if number is prime
{
  unsigned long sq_root = floor(sqrt(prime));

  if (prime == 1) return false;
  for (int i = 2; i <= sq_root; i++)
  {
    if (prime % i == 0) return false;
  }
  return true;
  /*Total shit
  if (prime == 1) return false;
  if (prime == 2) return true;
  if (prime == 3) return true;
  if (prime == 5) return true;
  
  if ((prime % 2) == 0  || (prime % 3) == 0
      || (prime % 5) == 0) return false;
      else return true;*/
}

int main(int argc, char *argv[])
{

  for (unsigned long i = 1; i < NUMBER; ++i)
  {
    if (is_Prime(i) == 1)
    {
      if (NUMBER % i == 0) printf("%llu\n", i);
    }
  }

  return 0;
}
