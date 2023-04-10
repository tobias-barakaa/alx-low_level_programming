#include "main.h"

/**
 * get_bit - value of bit
 * @n: number
 * @index: index
 * Return: return val
 */
int get_bit(unsigned long int n, unsigned int index)
{
int val;
unsigned int size_of_elem_val;

size_of_elem_val = (sizeof(unsigned long int) * 8);
if (index >= size_of_elem_val)
return (-1);
val = ((n >> index) & 1);
return (val);
}
