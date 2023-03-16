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
char *mall;
	unsigned int ls1, ls2, lmall, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;

	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;

	if (n > ls2)
		n = ls2;

	lmall = ls1 + n;

	mall = malloc(lsout + 1);

	if (mall == NULL)
		return (NULL);

	for (i = 0; i < lmall; i++)
		if (i < ls1)
			mall[i] = s1[i];
		else
			mall[i] = s2[i - ls1];

	mall[i] = '\0';

	return (sout);
}
