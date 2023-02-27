#include "main.h"

/**
 * swap_int - function to swap values
 * @a: first argument
 * @b: second argument
 * Return: always return zero always
 */
void swap_int(int *a, int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}
