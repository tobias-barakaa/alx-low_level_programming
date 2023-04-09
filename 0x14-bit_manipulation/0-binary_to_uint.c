#include "main.h"

/**
 * binary_to_uint - binary to interger change;
 * @b: first argument
 * Return: converted no. zero
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int to_bit;

for (to_bit = 0; *b; b++)
{
	if (*b == '1')
	to_bit = (to_bit << 1) | 1;
else if (*b == '0')
	result <<= 1;
	else
		return (NULL);
}
return (to_bit);
}
