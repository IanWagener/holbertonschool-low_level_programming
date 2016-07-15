#include <stdlib.h>

void quick_sort(int *array, int size)
{
        int n = 0;
        int x = size - 1;
        int pivot;
        int swap;

        if (size < 2) /* if partition is sorted*/
                return;
        pivot = array[rand() % size]; /* Chooses  pivot point */
        /* Swaps values until sorted least to greatest*/
        while (n < x) {
                while (array[n] < pivot)
                        n++;
                while (array[x] > pivot)
                        x--;
                if (array[n] > array[x]) {
                        swap = array[n];
                        array[n] = array[x];
                        array[x] = swap;
                } else {
                        n++;
                }
        }
        /* sorts each partition recursively*/
        quick_sort(array, n);
        quick_sort(&array[n], size - n);
}
