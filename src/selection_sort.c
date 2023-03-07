#include "select.h"
#include "selection_sort.h"
#include "swap.h"

void selection_sort( int *arr, int arr_size)
{
    for (int i = 0; i < arr_size ; i++)
    {
        int lower_index = select (arr, arr_size, i);

        if (lower_index != i)
        swap(arr, lower_index, i);
    }
}
