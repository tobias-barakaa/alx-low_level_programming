#include "main.h"
/**
 * print_sign  - checks number's sign
 *
 * @n: n is the variable argument
 * Return: Returns outputs of sign
 */
int print_sign(int n)
{
        if (n > 0)
        {
                _putchar ('+');
                return (1);
        }
        else if (n == 0)
        {
                _putchar ('0');
        }
        else if (n < 0)
        {
                _putchar('-');
                return (-1);
        }
        return (0);
}
