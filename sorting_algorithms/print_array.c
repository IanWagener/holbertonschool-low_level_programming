int print_char(char);
#include <stdio.h>

/*This funciton */
void print_array(int *array, int size){

  int i;

  for (i  = 0; i < size; i++){
    printf("%d", array[i]);
    if (i < size -1){
      printf(" ");
      printf(",");
    }
  }
  printf("\n");
}
