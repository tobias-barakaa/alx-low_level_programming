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
for (size_t i = 0; i < size; i++)
{
printf("Value checked array[%zu] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
}
return (-1);
}
