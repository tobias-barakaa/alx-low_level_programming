#include "main.h"

/**
 * _memset - prints buffer in hexa
 * @s: the address of memory to print
 * @n: the size of the memory to print
 * @b: the data type to print
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
       for (n = 0; n > 0; n--)
	{
	 s[n - 1] = b;
	}
	return (s);
}


