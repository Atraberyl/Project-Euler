#include <stdio.h>

#define TOP_LIMIT 4e6

int main()
{
  unsigned long fibonacci;
  unsigned long p_fibonacci = 1;
  unsigned long p2_fibonacci = 1;
  unsigned long count = 0;
  
  while (1)
  {
    fibonacci = p_fibonacci + p2_fibonacci;
    p2_fibonacci = p_fibonacci;
    p_fibonacci = fibonacci;
    printf("%u\n", fibonacci);

    if (fibonacci > TOP_LIMIT) break;
      else if (fibonacci % 2 == 0) count += fibonacci;
  }
  printf("\n%u\n", count);
  return 0;
}
