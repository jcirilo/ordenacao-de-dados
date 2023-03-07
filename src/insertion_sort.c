#include "insertion_sort.h"

void insertion_sort (int *arr, int arr_size)
{
    for (int i = 1; i < arr_size; i++)
    {
        int temp = arr[i];
        int j = i - 1;
    
        while (j >= 0 && temp < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }        
    
        arr[j + 1] = temp;
    }
}