#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int print_char(char c);
int length(char **a);

void print_array_of_strings(char **a)
{
  char *array;
  int i = 0;
  int j = 0;
  int l = length(a);
  array = malloc (l * sizeof(char));

  while (a[i] != '\0')
    {
      while (a[i][j] != '\0')
	{
	  array[j] = a[i][j];
	  print_char(array[j]);
	  j++;
	}
      j = 0;
      print_char(' ');
      i++;
    }
  print_char('\n');
  free(array);
}

int length(char **a)
{
  int i;
  int j;
  i = 0;
  j = 0;
  while (a[i] != '\0')
    {
      while (a[i][j] != '\0')
	{
	  j++;
	}
      i++;
    }
  return j;
}
int print_char(char c)
{
  return (write(1, &c, 1));
}
