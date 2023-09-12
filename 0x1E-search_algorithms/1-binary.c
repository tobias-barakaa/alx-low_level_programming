#include "search_algos.h"

/**
 *binary_search - implement binary search algorithm
 *@array: array of function
 *@size: size of array
 *@value: element of array
 *Return: Always EXIT_SUCCESS
 **/

int binary_search(int *array, size_t size, int value)
{
size_t i, left = 0, right = size - 1, mid;

while (left <= right)
{
printf("Searching in array: ");
for (i = left; i <= right; i++)
{
printf("%d", array[i]);
if (i < right)
printf(", ");
}
printf("\n");
mid = (right + left) / 2;
if (array[mid] == value)
return (mid);
else if (array[mid] < value)
left = mid + 1;
else
right = mid - 1;
}
return (-1);
}
