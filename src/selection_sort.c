#include "selection_sort.h"
#include "swap.h"

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

void selection_sort( int *arr, int arr_size)
{
    for (int i = 0; i < arr_size ; i++)
    {
        int lower_index = select(arr, arr_size, i);

        if (lower_index != i)
        swap(arr, lower_index, i);
    }
}
