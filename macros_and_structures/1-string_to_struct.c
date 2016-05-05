#include "str_struct.h"
#include <stdlib.h>

struct String *string_to_struct(char *str)
{
  struct String *string;
  int length=0;
  
  if(str=='\0') {
    return(0);
  }
  while(str[length] != '\0') {
    length++;
  }
  string = malloc(sizeof(struct String));

  string -> str = str;
  string -> length = length;

  return(string);
}
