#include <stdlib.h>
int array_size(char*c);

char *string_dup(char *c)
{
  int i=0;
  char *str;
  int size = array_size(c);
  str = malloc(sizeof(char) * size);
  if (str == NULL)
    {
      return NULL;
    }
      while(i <= size)
	{
	  str[i] = c[i];
	  i++;
	}
    return str;
}
int array_size(char*c) {
  int i=0;
  while(c[i] != '\0') {
    i++;
  }
  return i;
}
