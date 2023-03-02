#include "main.h"
/**
 *_memcpy - a function that copies
 *@dest: argument that stores
 *@src: argument second
 *@n: number of bytes
 *
 *Return: Always return 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = 0;

	while (n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	return (dest);
}
