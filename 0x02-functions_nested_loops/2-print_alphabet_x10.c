#include "main.h"

/**
 * print_alphabet -  a function that prints the alphabet in lowercase then ten times
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
int i = 0, j = 0;
while (i < 10)
{
for (j = 0; j < 10; j++)
{
_putchar(j);
}
_putchar("\n");
i++;
}
}
