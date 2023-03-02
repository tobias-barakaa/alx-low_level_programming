#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest: first input string
 * @src: second input string
 * @n: number of butes to be used
 *
 * Description: use at most n bytes from src
 * Return: returns concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	i = 0;
	len = 0;
	while (dest[len] != '\0')
	{
		++len;
	}
	while (src[i] != 0 && i < n)
	{
		dest[len] = src[i];
		++i;
		++len;
	}	
	dest[len] = '\0';
	return (dest);
}
