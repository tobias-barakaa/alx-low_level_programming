#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
*linear_search - linear search function
*@array: list of num or arrays
*@value: data to check
**/

int linear_search(int *array, size_t size, int value)
{
if (array == NULL)
return (-1); // Exit with an error code
for(size_t i = 0; i < size; i++)
{
printf("Value checked array[%zu] = [%d]\n", i, array[i]);
if (array[i] == value)
printf("Found %d at index: %zu\n", array[i], i);
}
return (-1);
}
