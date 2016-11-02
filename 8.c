#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

char open_File(char * number_1000_digit)
{
  FILE * data_file;
  char digit;
  int i;

  data_file = fopen("8.data", "rt");

  while (fread(&digit, sizeof(char), 1, data_file),
	 !feof(data_file))
  {
    number_1000_digit[i] = digit;
//printf("%c", digit);
  }

  return number_1000_digit;
}

int main(int argc, char *argv[])
{
  return 0;
}
