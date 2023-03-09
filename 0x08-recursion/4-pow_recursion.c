#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - function exponential
 * @x: first argument
 * @y: second argument
 * Return: always zero
 */

int _pow_recursion(int x, int y)
{
	int result;
	if (x != 0)
	{
		result *= y
	} 
	else if (x < 0)
	{
		return (-1);
	}
	_putchar(result);
	return (result( _pow_recursion(y,x - 1)));
}	
