#include "main.h"

/**
*clear_bit - func dat sets the value of 
*a bit to 0 at a given index
*@n: first argument
*@index: index arg
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
  int value_elem_index = (index >= sizeof(unsigned long int) * 8);
  
  if(value_elem_index)
  return (-1);
  *n &= ~(1 << index);
  return (1);
}
