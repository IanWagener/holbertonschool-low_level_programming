#include <stdlib.h>

void free_grid(int **array, int a)
{
  int i;
  for(i = 0; i < a; i++)
    {
      free(array[i]); 
    }
  free(array);
}
