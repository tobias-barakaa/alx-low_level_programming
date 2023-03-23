#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers & new line at the end
 * @separator: string
 * @n: number of elements
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list args;
    va_start(args, n);

    for (int i = 0; i < n; i++) {
        printf("%d", va_arg(args, int));

        if (separator != NULL && i < n - 1) {
            printf("%s", separator);
        }
    }

    va_end(args);
    printf("\n");
}
