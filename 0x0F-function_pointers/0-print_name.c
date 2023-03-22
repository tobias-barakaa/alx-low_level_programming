#include "function_pointers.h"

/**
 * print_name - functions name
 * @name: first arg
 * @f: scond arg
 * Return: zero always
 */

void print_name(char *name, void (*f)(char *))
{
if (name && f)
		f(name);
}
