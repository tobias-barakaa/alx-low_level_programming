#include "main.h"

/**
 * _strcat - concatenates string
 * @dest: String that will be appended
 * @src: String to be concatenated upon
 * Return: returns 0
 */

char *_strcat(char *dest, char *src)
{

	int index = 0, len = 0;

	while (dest[index++])
		len++;

	for (index = 0; src[index]; index++)
		dest[len++] = src[index];

	return (dest);
}
