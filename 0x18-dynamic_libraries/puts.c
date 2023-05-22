#include "main.h"

/**
 * _puts - prints a string
 * * @s: argument
 * Return: Return always 0
 */
void _puts(char *s)
{
	int z;

	for (z = 0; s[z] != '\0'; z++)
	{
		_putchar(s[z]);
	}
	_putchar('\n');
}
