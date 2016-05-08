#include <stdlib.h>
#include <stdio.h>
#include "list.h"

int strlength(char *str);
void copy_str(char *src, char *dest);
int add_node(List **list, char *str);

List *params_to_list(int ac, char **av) {
  int i = 0;
  List *list = malloc(sizeof(void *) * (ac + 1));
  if (list == NULL) return NULL;
  while (i < ac) {
    if (add_node(&list, av[i])) return NULL;
    i++;
  }
  return list;
}

int add_node(List **list, char *str) {
  List *node_to_add = malloc(sizeof(List));
  List *curr = *list;

  node_to_add->next = NULL;
  node_to_add->str = malloc(sizeof(char) * strlength(str));
  copy_str(str, node_to_add->str);

  if (node_to_add == NULL) return 1;
  if (curr == NULL) {
    *list = node_to_add;
    return 0;
  }

  while (curr->next != NULL) curr = curr->next;
  curr->next = node_to_add;

  return 0;
}

int strlength(char *str) {
  int count = 0;
  while (str[count] != 0) count++;
  return (count + 1);
}


void copy_str(char *src, char *dest) {
  char *temp;
  while (*src != 0) {
    *dest = *src;
    src++;
    dest++;
  }
  *dest = 0;
  temp = src;
  temp = dest;
  src = temp + 1;
}
