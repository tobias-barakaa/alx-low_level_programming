#include "main.h"

/**
 * _memcpy - function to copy
 * @dest: argument to copy to
 * @src: second argument
 * @n: third argument
 * Return: always return 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; n++)
	{
		dest[i + 1] = src[i + 1];
	}
	return (dest);
}
