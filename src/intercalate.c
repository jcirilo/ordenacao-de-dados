#include "intercalate.h"
#include <stdio.h>

void intercalate (int *arr, int start1, int end1, int start2, int end2)
{
    int j = start1;
    int k = start2;

    while (j <= end1)
    {
        printf("%d", arr[j]);
        j += 1;
    }

    printf("\n");

    while (k <= end2)
    {
        printf("%d", arr[k]);
        k += 1;
    }

}