#include "main.h"

/**
* _memcpy - function to copy
* @dest: input pointer to string destination
* @src: input pointer to source string
* @n: number of bytes
* Return: pointer to destination
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
