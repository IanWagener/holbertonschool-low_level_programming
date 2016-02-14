#include "my_functions.h"

void print_combination_2(void)
{
  int i1;
  int i2;

  for (i1 = '0'; i1 <= '8'; i1++) {
    for(i2 = '1'; i2 <= '9'; i2++) {
      if (i1 != i2) {
	if (i2 >i1) {
       	  print_char(i1);
	   print_char(i2);
	   if (i1 < '8' && i2 <= '9')
	     {
	       print_char(',');
	       print_char(' ');  
	     }
	}
      }
    }    
  }
}
