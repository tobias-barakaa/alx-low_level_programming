#include "main.h"

/**
 * print_alphabet -  a function that prints the alphabet in lowercase
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char alpha = 'a';
	while(alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
