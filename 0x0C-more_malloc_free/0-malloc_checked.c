#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates
 * @b: first argument
 * @ptr: second argument
 * Return: return zero always
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;
	
	ptr = malloc(b);
	if (ptr == NULL) {
		exit(98);
	}
	return ptr;
}
