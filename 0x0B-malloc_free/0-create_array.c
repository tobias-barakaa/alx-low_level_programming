#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * char - function that takes arrays
 * @size: argument function
 * @c: second argument
 * @Return: NULL if fails
 */

char *create_array(unsigned int size, char c)
{

	if (size = 0)
		return NULL;
	char *num = (char*) malloc(size * sizeof(char));
	for (int i = 0; i < size; i++)
		num[i] = c;
}
