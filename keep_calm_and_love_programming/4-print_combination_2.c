#include "my_functions.h"

/*start of function*/
void print_combination_2(void)
{
  int i1;
  int i2;
  /*printing out all combinations of 2 digits*/
  for (i1 = '0'; i1 <= '8'; i1++) {
    for(i2 = '1'; i2 <= '9'; i2++) {
      if (i1 != i2) {
        if (i2 >i1) {
          printf("%c", i1);
          printf("%c", i2);
          if (i1 < '8' && i2 <= '9')
	    {
	      printf(",");
	      printf(" ");  
	    }
	}
      }
    }
  }    
}

