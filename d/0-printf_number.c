#include "my_functions.h"

void printf_number(int n)
{
  int ncopy=n;
  int numdigit;
  int power=1;
  int charint;

  if (0 > ncopy)
    {
      ncopy=ncopy*-1;
      printf("-");
    }
  for (numdigit=0; ncopy > 0; numdigit++)
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
      printf("%d", charint);
    }

  if (n == 0)
    {
      printf("0");
    }
}
