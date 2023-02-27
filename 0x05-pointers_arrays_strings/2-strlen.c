#include "main.h"

/**
 * _strlen - count string length
 * @s: first string argument
 * Return: Always zero
 */

int _strlen(char *s)
{
	int v;

	v = 0;

	while (s[v] != '\0')
	{
		v++;
	}
	return (v);
}
