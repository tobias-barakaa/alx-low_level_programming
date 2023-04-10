#include "main.h"

/**
 * get_bit - value of bit
 * @n: number
 * @index: index
 * Return: return val
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit;
unsigned int bitss;

}




#include "main.h"

/**
 * get_bit - value of bit
 * @n: number
 * @index: index
 * Return: return val
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit;
unsigned int bitss;
bitss = (sizeof(unsigned long int) * 8);
if (index > bitss)
return (-1);
bit = ((n >> index) & 1);
return (bit);
}
