#include "main.h"

/**
 * _memcp - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; n++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
