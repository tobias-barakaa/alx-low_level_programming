#include "main.h"

/**
 * puts2 - print one char out of 2 of a string
 * @str: string to print
**/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
