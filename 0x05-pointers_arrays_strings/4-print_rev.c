#include "main.h"
#include "string.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string
**/
int string_length(char *str);

int string_length(char *str)
{
	int len = 0;

	while (*str != '\0')
       	{
		len++;
		str++;
	}
	return len;
}

/**
 * string_length - function string
 * @str : argument
 */

void print_rev(char *s)
{
	int i;

	for (i = string_length(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
