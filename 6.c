#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum

#define square(x) x * x

int main(int argc, char *argv[])
{
  unsigned int sum_of_square, square_of_sum;
  
  for (int i = 1; i <= 100; ++i)
  {
    sum_of_square += square(i);
    square_of_sum += i;
  }

  printf("%d\n", (square(square_of_sum) - sum_of_square));
  return 0;
}
