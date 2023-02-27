#include "main.h"

/**
 * swap_int - function to swap values
 * @a: first argument
 * Return: always return zero always
 */
void swap_int(int *a, int *b)
{
	int a = 98;
        int b = 42;
	*a = &a;
	*b = &b;
	*a = *b;	
}
