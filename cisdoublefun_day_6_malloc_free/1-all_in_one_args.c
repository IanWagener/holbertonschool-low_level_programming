#include <stdio.h>
#include <stdlib.h>
int arg_length(int, char **);
int str_len(char *s);
char *concat_strings(char *dest, const char *src);
char *all_in_one_args(int ac, char **av)
{
  int i;
  char *array;
  int length;
  char new[] = {'\n', '\0'};

  i = 0;
  length = arg_length(ac, av);
  array = malloc(length * sizeof(char));

  if (array == NULL)
    {
      return NULL;
    }

  while (i < ac)
    {
      concat_strings(array, av[i]);
      concat_strings(array, new);
      i++;
    }
  return array;
}
int arg_length(int ac, char **av)
{
  int i;
  int l;
  i = 0;
  l = 0;
  while (i < ac)
    {
      l += str_len(av[i]) + 1;
      i ++;
    }
  return l;
}
int str_len(char *s)
{
  int i;
  i = 0;
  while (s[i] != '\0')
    {
      i++;
    }
  return i;
}
char *concat_strings(char *dest, const char *src)
{
  int a;
  int b;

  b = str_len(dest);

  for (a = 0; src[a]; a++)
    {
      dest[b + a] = src[a];
    }
  dest[b + a]= '\0';

  return dest;
}
