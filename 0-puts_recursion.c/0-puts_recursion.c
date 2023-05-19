#include "main.h"

/**
 * _puts_recursion - function to print words in new line
 * @s: first argument
 * Return: zero always
 */

void _puts_recursion(char *s)
{
	s[19] = "Puts with recursion";

		for (i = 0; i < 19; i++)
		{
			_putchar("%s", s[i]);
		}
	return (0);
}
