#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates array of integers.
 * @min: first arg
 * @max: second arg
 *
 * Return: pointer
 * if man > mix, NULL.
 * if malloc returns NULL.
 */
int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(*ar) * ((max - min) + 1));

	if (ar == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ar[i] = min;

	return (ar);
}
