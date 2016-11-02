#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

bool is_Palyndrome(int to_check)
{
  char string_to_check[7];
  sprintf(string_to_check, "%d", to_check);
  int lengh = strlen(string_to_check);
  bool value = true;
  for (int i = 0; i < (lengh/2); i++)
  {
    if ((int) string_to_check[i] == (int) string_to_check[lengh - (i+1)])
      {
	value *= true;
      }
    else value *= false;
  }
  return value;
}

int main(int argc, char *argv[])
{
  int max_palyndrome;
  
  for (int i = 999; i > 0; --i)
  {
    for (int j = 999; j > 0; --j)
    {
      int product = i * j;
      if (is_Palyndrome(product) == true)
	{
	  if (product > max_palyndrome) max_palyndrome = product;
	}
    }
  }

  printf("%d\n", max_palyndrome);
  /*int test1 = 4004;
  int test2 = 50045;
  int test3 = 5004;

  printf("%d %s\n", test1, (is_Palyndrome(test1) == 1 ? "is a palyndrome" : "is not"));
  printf("%d %s\n", test2, (is_Palyndrome(test2) == 1 ? "is a palyndrome" : "is not"));
  printf("%d %s\n", test3, (is_Palyndrome(test3) == 1 ? "is a palyndrome" : "is not"));*/
  end :return 0;
}
