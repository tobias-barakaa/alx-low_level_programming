#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - function to sum numbers
 * @params: parametre to add
 * @n: counts
 * @i: iterate
 * @sum: sum of
 * Return: return sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	va_list params;
		va_start(params, n);
		unsigned int i;
		if (n == 0)
			return (0);
		for (i = 0; i < n; i++) {
			unsigned int c = va_arg(params, int);
			sum += c;
		}
		va_end(params);
		return (sum);
}
