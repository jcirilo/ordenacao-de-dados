#include "select.h"

int select (int *arr, int arr_size, int first_index)
{    
    int lower = first_index;

    for (int i = first_index + 1; i < arr_size; i++)
    {
        if (arr[i] < arr[lower])
        lower = i;
    }

    return lower;
}