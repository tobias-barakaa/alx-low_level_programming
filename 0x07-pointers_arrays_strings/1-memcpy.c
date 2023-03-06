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
	char *dest_ptr = dest;
	char *src_ptr = src;
	
	for (unsigned int i = 0; i < n; i++)
	{
		*dest_ptr++ = *src_ptr++;
	}
	return (dest);
}
