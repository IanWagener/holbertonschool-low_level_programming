#include<stdlib.h>
#include <stdio.h>

int **alloc_grid(int col, int row)
{
  int **array;
  int i, j;

  array = malloc(sizeof(int *) * col);

  for(i = 0; i < col; i++)
    {
      array[i] = malloc(sizeof(int) * col * row);
    }

  if (array == NULL)
    {
      return NULL;
    }

  for (i = 0; i < col; i++)
    {
      for (j = 0; j < row; j++)
	{
	  array[i][j] = 0;
	}
    }

  return array;
}
void print_grid(int **array, int col, int row)
{
  int i, j;

  for (i = 0; i < col; i++)
    {
      for (j = 0; j < row; j++)
	{
	  printf("%d",array[i][j]);
	
	  if (j != row - 1)
	    {
	      printf(", ");
	    }
	}

      printf("\n");

    }

}
