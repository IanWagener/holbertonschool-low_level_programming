#include <stdlib.h>
#include "list.h"

void free_dl_list(List *list) {
  List *node_ptr;
  List *tmp;

  node_ptr = list;

  while (node_ptr != NULL) {
    free(node_ptr->str);
    tmp = node_ptr->next;
    free(node_ptr);
    node_ptr = tmp;
  }
}
