#include "main.h"

/**
 * _puts - function that prits
 * @str: first argument
 * Return: Always return 0
 */

void _puts(char *str)
{
	int z;

	for (z = 0; str[z] != '\0'; z++)
	 {
		_putchar(str[z]);
	}
	 _putchar('\n');
}
