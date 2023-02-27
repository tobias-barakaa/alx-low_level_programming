#include "main.h"

/**
 * swap_int - function to swap values
 * @a: first argument
 * Return: always return zero always
 */
void swap_int(int *a, int *b)
{
	 a = 98;
         b = 42;
	*a = &b;
	*b = &a;
}
