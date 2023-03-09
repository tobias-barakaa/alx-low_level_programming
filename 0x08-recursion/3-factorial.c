#include "main.h"
#include <stdio.h>

/**
 * factorial - find the factorial of a number
 * @n: number to find factorial
 * Return: always zero return
 */
int fac();

int factorial(int n)
{

	if (n <= 0)
	{
	       return(-1);
	}
	return (n * (factorial(n - 1)));
}
