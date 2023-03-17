#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first argument
 * @s2: second argument
 * @n: third argument
 * Return: return zero always
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int i, len1, len2, length, j;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = 0;
	for (i = 0; *(s1 + i) != '\0'; i++)
		len1++;
	len2 = 0;
	for (i = 0; *(s2 + i) != '\0'; i++)
		len2++;
	if (n >= len2)
	{
		n = len2;
	}
	length = len1 + n;
	p = malloc((sizeof(char) * length) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; i < length; j++, i++)
	{
		p[i] = s2[j];
	}
	p[i] = '\0';
	return (p);
}
