#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
*linear_search - linear search function
*@array: list of num or arrays
*@value: data to check
*@size: length of the arr
*
*Return: value otherwise
*/

int linear_search(int *array, size_t size, int value)
{
if (array == NULL || size <= 0)
return (-1);
for (int i = 0; i < size; i++)
{
printf("Value checked array[%u] = [%d]\n", i, array[i]);
if (value == array[i])
{
return (i);
}
}
return (-1);
}
