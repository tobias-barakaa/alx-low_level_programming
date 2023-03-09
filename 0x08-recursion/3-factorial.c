#include "main.h"
#include <stdio.h>

/**
 * factorial - find the factorial of a number
 * @n: number to find factorial
 * Return: always zero return
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * (factorial(n - 1)));
}
