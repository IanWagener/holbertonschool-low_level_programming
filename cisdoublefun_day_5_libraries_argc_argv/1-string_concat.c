#include <stdlib.h>
int total_length(char *c, char *d);

char *string_concat(char *a, char *b)
{
  int i;
  int j = 0;
  char *str1;
  int length = total_length(a,b);

  str1 = malloc(sizeof(char) * length);
  if (str1 == NULL)
    {
      return NULL;
    }
  for (i = 0; a[i] != '\0'; i++)
    {
      str1[i] = a[i];
    }
  while( b[j] != '\0')
    {
      str1[i] = b[j];
      i++;
      j++;
    }
  return str1;
}
int total_length(char *c, char *d)
{
  int i;
  int j;
  int total;
  for (i = 0; c[i] != '\0'; i++);
  for (j =0; d[j] != '\0'; j++ );
  total = i + j;
  return total;

}
