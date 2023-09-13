#include "search_algos.h"
#include <math.h>

/**
 * jump_search - jump search function
 * @array: value array
 * @size: size of the array
 * @value: what we are searching for
 * Return: index of value if found, or -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
    size_t step,i,left = 0;

    step = sqrt(size);

    while (left < size && array[left] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", left, array[left]);
        left += step;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", left - step, left);

    for (i = left - step; i < size && i <= left; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}
