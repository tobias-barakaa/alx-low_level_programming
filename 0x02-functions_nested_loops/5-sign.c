#include "main.h"

/**
 * print_sign - find if input is pos, neg, or 0
 * @n: Int to print sign from
 *
 * Return: return 1 if pos, return 0 if 0, return -1 if neg
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
