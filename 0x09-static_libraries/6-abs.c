#include "main.h"

/**
 * _abs - Convert to absolute value of an integer
 * @n: the integer to affect
 *
 * Return: Return absolute value of integer
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
