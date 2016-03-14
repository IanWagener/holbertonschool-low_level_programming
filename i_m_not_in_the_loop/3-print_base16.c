#include "my_functions.h"

void print_base16(void)
{
  int i;
  char ABCDEF;
 
  for (i = '0'; i <= '9'; i++)
    {
      print_char(i);
    }
  for (ABCDEF = 'A'; ABCDEF <= 'F' ; ABCDEF++)
      {
	print_char(ABCDEF);
      }
  }
