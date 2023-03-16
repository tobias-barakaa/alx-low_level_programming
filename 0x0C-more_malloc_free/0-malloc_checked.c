#include "main.h"
#include <stdio.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: first argument
 * Return: return zero always
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
