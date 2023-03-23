#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"


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
	 int sum = 0;
	va_list args;
		
		unsigned int i;
		if (n == 0)
			return (0);
		va_start(args, n);
		for (i = 0; i < n; i++) {
			sum += va_arg(args, int);
		}
		va_end(args);
		return (sum);
}
