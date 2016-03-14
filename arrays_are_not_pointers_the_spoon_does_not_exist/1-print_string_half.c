#include <stdio.h>

int print_char(char c);

void print_string_half(char *str)
{
  int i, c;
 
  while (str[i] != '\0') {
    i++;
  }
  for (c = i/2 + 1; c < i; c++) {
    print_char(str[c]);
  }
}
