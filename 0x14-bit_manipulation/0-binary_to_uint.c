#include "main.h"

/**
 * binary_to_uint - binary to interger change;
 * @b: first argument
 * Return: converted no. zero
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int to_bi;
	if (!*b)
		return (*b);

for (to_bi = 0; *b; b++)
{
	if (*b == '1')
	to_bi = (to_bi << 1) | 1;
else if (*b == '0')
	to_bi <<= 1 | 1;
	else
		return (0);
}
	return (to_bi);
}
