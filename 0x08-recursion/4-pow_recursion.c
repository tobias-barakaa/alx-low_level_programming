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
	
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (x == x)
	{
		return;
	}
	else {
	return x *( _pow_recursion(x,y - 1));
	}
}
