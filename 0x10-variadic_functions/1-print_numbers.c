#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints number
 * @separator: separator
 * @n: elements number
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list num;
unsigned int i;

va_start(num, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(num, int));

if (separator != NULL && i != (n - 1))
{
printf("%s", separator);
}
}
putchar('\n');
va_end(num);
}
