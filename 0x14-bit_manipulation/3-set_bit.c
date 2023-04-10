#include "main.h"

/**
*set_bit -sets the value of a bit to 1 at a given index
*@n: first argument
*@index: second arg
*Return: return 1 if success
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	int value_elem_data = (index >= sizeof(unsigned long int) * 8);
	
	if (value_elem_data)
		return (-1);
	*n |= (1 << index);
	return (1);
}
