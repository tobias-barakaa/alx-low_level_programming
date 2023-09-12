#include "search_algos.h"

/**
 * linear_search - Perform linear search to find a value in an array.
 * @input_array: Pointer to the array.
 * @array_size: Number of elements in the array.
 * @target_value: The value to search for.
 *
 * Return: Index of the target_value if found, or -1 if not found or on error.
 */
int linear_search(int *array, size_t size, int value) {
size_t i;
    if (array == NULL || size == 0) {
        return (-1);
    }

    for (i = 0; i < size; i++)
{
          printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value) {
            return (i);
        }
    }

    return (-1);
}
