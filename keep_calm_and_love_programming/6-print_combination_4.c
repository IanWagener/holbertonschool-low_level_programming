#include "my_functions.h"

void print_combination_4(void)
{
  int i1, i2, i3, i4;

  for (i1 = '0'; i1 <= '9'; i1++) {
    for (i2 = '0'; i2 <= '9'; i2++) { 
      for (i3 = i1; i3 <= '9'; i3++) {
	for (i4 = i2 + 1; i4 <= '9'; i4++) {
	  print_char(i1);
	  print_char(i2);
	  print_char(' ');
	  print_char(i3);
	  print_char(i4);
	  if (i1 != '9' || i2 != '8' || i3 != '9' || i4 != '9') {
	      print_char(',');
	      print_char(' ');
	  }
	}
      }
    }
  }
}
