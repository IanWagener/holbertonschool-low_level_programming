#include "my_functions.h"

void print_combination_1(void)
{
  int i;
  
  for (i = '0'; i <= '8'; i++)
    {
      print_char(i);
      print_char(',');
      print_char(' ');
    }
  if (i == '9')
    {
      print_char(i);
    }
}
