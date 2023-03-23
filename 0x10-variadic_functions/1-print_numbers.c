#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function prints numbers
 * @args: argument
 * @i: iterate through
 * @n: total count
 * @separator: arg
 * Return: nothing
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
