#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - square root function
 * @n: first argument
 * Return: always zero
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return _sqrt_recursion(n * n);
}
