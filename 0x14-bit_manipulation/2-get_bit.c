#include "main.h"

/**
 * get_bit - value of bit
 * @n: number
 * @index: index
 * Return: return val
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bits;
  unsigned int val;

  i = (sizeof(unsigned long int) * 8);
        if (index > i)
        return (-1);
        val = ((n >> index) & 1);
        return (val);
}
