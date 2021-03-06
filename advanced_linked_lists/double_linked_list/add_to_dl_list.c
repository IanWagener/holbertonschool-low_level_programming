#include "list.h"
#include <stdlib.h>
#include <string.h>

List *get_tail(List **list);

int add_end_dl_list(List **list, char *str) {
  List *node_ptr;

  node_ptr = malloc(sizeof(List));
  if (node_ptr == NULL) {
    return 1;
  }

  node_ptr->str = strdup(str);
  if (node_ptr->str == NULL) {
    return 1;
  }

  if (*list == NULL) {
    node_ptr->prev = NULL;
    *list = node_ptr;
  }
  else {
      node_ptr->prev = get_tail(list);
    node_ptr->prev->next = node_ptr;
  }
  node_ptr->next = NULL;
  return 0;
}

List *get_tail(List **list) {
  List *node_ptr;
  node_ptr = *list;

    while (node_ptr->next != NULL) {
      node_ptr = node_ptr->next;
    }

    return node_ptr;
}

int add_begin_dl_list(List **list, char *str) {
  List *node_ptr;

  node_ptr = malloc(sizeof(List));
  if (node_ptr == NULL) {
    return 1;
  }

  node_ptr->str = strdup(str);
  if (node_ptr->str == NULL) {
    return 1;
  }

  node_ptr->next = *list;

  node_ptr->prev = NULL;

  if (node_ptr->next != NULL) {
    node_ptr->next->prev = node_ptr;
  }

  *list = node_ptr;

  return 0;
}
