#include <string.h>
#include "list.h"
void print_string(char *str);
int print_char (char c);


void print_dl_list(List *list) {
  List *node_ptr;

  node_ptr = list;

  if (node_ptr == NULL)
    return;

  while (node_ptr != NULL) {
    print_string(node_ptr->str);
    print_char('\n');

    print_char('\t');
    print_string( (node_ptr->prev == NULL) ? "NULL": node_ptr->prev->str);
    print_char('\n');

    print_char('\t');
    print_string( (node_ptr->next == NULL) ? "NULL": node_ptr->next->str);
    print_char('\n');

    node_ptr = node_ptr->next;
  }
}
