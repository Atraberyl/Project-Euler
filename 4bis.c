#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

bool is_Palyndrome(int to_check)
{
  char string_to_check = (char) to_check;
  int lengh = strlen(string_to_check);
  bool value = null;
  for (int i = 0; i < (lengh/2); i++)
  {
    if (string_to_check[i] == string_to_check[lengh - (i=0 ? 1 : i)])
      {
	value = true;
      }
  }
  return value;
}

int main(int argc, char *argv[])
{
  
  return 0;
}
