#include <stdio.h>
#include "str_struct.h"

void print_string_struct(struct String *str)
{
  printf("%s", str->str);
  printf(", ");
  printf("%d\n", str->length);
}
