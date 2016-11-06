#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

//Find the thirteen adjacent digits in the 1000-digit number that have the greatest product. What is the value of this product

void open_File(char * number_1000_digit)
//open 8.data and stores the 1000 digit nimber in the array given
{
  FILE * data_file;
  char digit;
  int i = 0;

  data_file = fopen("8.data", "rt");

  while (fread(&digit, sizeof(char), 1, data_file),
	 !feof(data_file))
  {
    number_1000_digit[i] = (char) digit;
    i++;
    //printf("%c", digit);
  }
}

unsigned long product_Adjacent_Digit(char * adjacent_digit, int number_digit)
//Take a string of numbers and make the product of each of them
{
  unsigned long product = 1;
  for (int j = 0; j < number_digit; j++)
  {
    int digit = adjacent_digit[j] - '0';
    product *= digit;
  }

  return product;
}

int main(int argc, char *argv[])
{
  char number_1000_digit[1000];
  char adjacent_digit[12];
  unsigned long long product;
  unsigned long long max_product = 1;
  int i = 0;

  open_File(number_1000_digit);

  do
    {
      strncpy(adjacent_digit, &number_1000_digit[i], 13);

      product = product_Adjacent_Digit(adjacent_digit, 13);
      if(product > max_product) max_product = product;
      i++;
    }
  while (adjacent_digit[12] != '\0');
  //printf("%c", number_1000_digit[1000]);

  printf("%llu\n", max_product);
  return 0;
}
