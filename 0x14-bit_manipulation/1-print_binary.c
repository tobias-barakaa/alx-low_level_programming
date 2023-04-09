#include "main.h"

/**
 * print_binary - binary representation
 * @n: argumentfirst
 * Return: return zero if not
 */

void print_binary(unsigned long int n)
{
	int i;
	
	for (i = 31; i >= 0; i++)
		printf ("%d", (n >> i) &i);
      return (0);
}      
