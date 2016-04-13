#include <stdlib.h>
int array_size(char*c);

char *string_dup(char *c)
{
  int i;
  char *str;
  int size = array_size(c);
  str = malloc(sizeof(char) * size);
  if (str == NULL)
    {
      return NULL;
    }
    to a newly allocated space in memory*/
  for(i = 0; i <= size; i++)
    {
      str[i] = c[i];
    }
  return str;
}
int array_size(char*c) {
  int i;
  for (i = 0; c[i] != '\0';i++);
  return i;
}

