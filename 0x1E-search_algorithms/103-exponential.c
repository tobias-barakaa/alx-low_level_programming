#include "search_algos.h"
#include <stdio.h>

/**
 * exponential_search - search for a value in a sorted array using Exponential Search
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index of the value if found, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t bound = 1;

    if (array == NULL || size == 0)
        return (-1);

    // Find the range for binary search
    while (bound < size && array[bound] < value) {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, bound);

    // Perform binary search within the range
    return binary_search(array, size, value, bound / 2, (bound < size) ? bound : size - 1);
}

/**
 * binary_search - perform binary search within a given range
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * @start: starting index of the range
 * @end: ending index of the range
 * Return: index of the value if found, or -1 if not found
 */
int binary_search(int *array, size_t size, int value, size_t start, size_t end)
{
    size_t mid, i;

    if (array == NULL)
        return (-1);

    while (start <= end) {
        mid = (start + end) / 2;
        printf("Searching in array: ");
        for (i = start; i <= end; i++) {
            printf("%d", array[i]);
            if (i < end)
                printf(", ");
            else
                printf("\n");
        }

        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            start = mid + 1;
        else
            end = mid - 1;
    }

    return (-1); // Value not found
}

