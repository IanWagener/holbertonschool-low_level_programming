#include "my_functions.h"
/*start of function*/
void print_combination_1(void)
{
  int i;
  /*printing 1-8*/
  for (i = '0'; i <= '8'; i++)
    {
      print_char(i);
      print_char(',');
      print_char(' ');
    }
  /*printing 9*/
  if (i == '9')
    {
      print_char(i);
    }
}
