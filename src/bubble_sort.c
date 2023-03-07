#include "bubble_sort.h"
#include "swap.h"

void bubble_sort ( int *arr, int arr_size) 
{
    int stop = 0;
    int count = 0;

    while (stop == 0)
    {
        for (int i = 0; i < (arr_size - 1); i++)
        {
            if (arr[i] > arr[i+1])
            {
                swap(arr, i, i+1);
                count++;
            }
        }

        if ( count == 0)
        stop = 1;
        
        count = 0;
    }
}