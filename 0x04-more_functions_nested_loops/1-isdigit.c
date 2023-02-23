#include "main.h"
#include <stdio.h>

/**
 * _isdigit - searchs for c through 9
 * @c: first argument
 * Return: always return 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
