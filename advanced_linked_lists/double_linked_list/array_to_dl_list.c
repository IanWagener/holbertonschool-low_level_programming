#include "list.h"
#include <string.h>

int add_end_dl_list(List **list, char *str);

List *array_to_dl_list(char **array) {
  int i;
  List *head_ptr;
  int node;

  head_ptr = NULL;

  for (i = 0; array[i] != NULL; i++) {
    node = add_end_dl_list(&head_ptr, array[i]);
    if (node == 1)
      return NULL;
  }
  return head_ptr;
}
