#include "my_functions.h"
#include <stdio.h>

void print_number(int n)
{
  char c;
  int ncopy=n;
  int numdigit;
  int power=1;
  int charint;

  for (numdigit=0; ncopy > 0; numdigit++)
    {
      ncopy=ncopy/10;
      power=power*10;
    }
  power=power/10;

  for (; ncopy/power;charint++)
    {
      charint=ncopy/power;
      n=ncopy-power;
    }
  printf("%d\n", n);
}

int main(void)
{
  print_number(98);
  print_number(402);
  print_number(1024);
  return (0);
}
