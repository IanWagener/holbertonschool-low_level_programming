#include "list.h"
#include <stdlib.h>
void rev_list(List **list) {
  List *slow = *list;
  List *next;
  List *base;

  next = slow->next;
  slow->next = NULL;

  while (next != NULL) {
    base = next;
    next = base->next;
    base->next = slow;
    slow=base;
  }
  *list = slow;

}
