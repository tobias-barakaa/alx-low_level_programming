#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - function to print words in new line
 * @s: first argument
 * Return: zero always
 */

void _puts_recursion(char *s)
{
 if (*s == '\0')
 {
	 putchar('\n');
	 return;
 }
 putchar(*s);
 _puts_recursion(s ++); 
}
