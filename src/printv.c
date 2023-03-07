#include "printv.h"
#include <stdio.h>

void printv (int *arr, int size)
{
    printf("[ ");
    
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);

        if ((i + 1) < size)
        printf(", ");
    }

    printf(" ]\n");
}