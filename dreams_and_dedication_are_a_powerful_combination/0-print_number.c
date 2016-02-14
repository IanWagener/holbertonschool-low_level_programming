#include "my_functions.h"

void print_number(int n)
{
  int ncopy=n;
  int power=1;
  int charint;
  
  if (0 > ncopy)
    {
      ncopy=ncopy*-1;
      print_char('-');
    }
   for (; ncopy > 0;)
    {
      ncopy=ncopy/10;
      power=power*10;
    }
  power=power/10; 
 if (0 > n)
    {
      n=n*-1;
      
    }
  for (ncopy=n; ncopy > 0;)
    {
      charint=ncopy/power;
      ncopy=ncopy%power;
      power=power/10;
      print_char(charint + '0');
    }
  
  if (n == 0)
    {
      print_char('0');
    }
}
/*

ncopy        power        numdigit

1024/10      1*10          0+1
102/10       10*10         1+1
10/10        100*10        2+1
1/10         1000*10       3+1
0            10000         4

0+1024       10000/10      4
1024         1000          4 
*0*

1024/1000    1000/10      
ncopy/power  power/10      

x
1024    % power 

024
24
4


 */
