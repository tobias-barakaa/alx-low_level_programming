#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - function to print in reverse
 * @s: last argument
 * Return: always zero
 */

void _print_rev_recursion(char *s)
{
	if(*s == "\0")
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
	
}
