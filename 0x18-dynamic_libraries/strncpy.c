#include "main.h"

/**
 * _strncpy - function to copy a string
 * @dest: index argument
 * @src: The source string.
 * @n: second index argument
 * Return: return 0 always
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
