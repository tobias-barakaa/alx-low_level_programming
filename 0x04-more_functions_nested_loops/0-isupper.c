#include "main.h"
#include <stdio.h>

/**
 * _isupper - functions to detect uppercase
 * @c: first argument
 * Return: always Return 0
 */

int _isupper(int c)
{

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	return (1);
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
