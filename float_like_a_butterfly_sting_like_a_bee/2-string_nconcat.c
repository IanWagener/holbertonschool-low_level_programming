#include <stdlib.h>
int length_total(char *a ,int n);

char *string_nconcat(char * a, char *b , int n)
{
  int i;
  int j = 0;
  char *str;
  int length = length_total(a ,n);

  str = malloc(sizeof(char) * length);

  for (i = 0; a[i] != '\0'; i++)
    {
      str[i] = a[i];
    }
  while (i < length)
    {
      str[i] = b[j];
      i++;
      j++;
    }
  return str;
}
int length_total(char *a ,int n)
{
  int i;
  int sum;
  for (i = 0; a[i] != '\0';i++);
  sum = i + n;
  return sum;
}
