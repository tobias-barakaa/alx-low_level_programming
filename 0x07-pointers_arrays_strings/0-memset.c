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
       while (n > 0)
	{
	 s[n - 1] = b;
	n--;
	}
	return (s);
}


