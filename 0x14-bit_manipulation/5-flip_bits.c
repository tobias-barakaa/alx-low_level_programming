#include "main.h"

/**
*flip_bits - func to flipp numbers
*@n: first arg
*@m: second args
*Return: return flip bits rtn
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

unsigned long int number_long_integ = n ^ m;

unsigned int number_elements_sum_digits_data = 0;

while ((number_long_integ) != 0)
{
number_elements_sum_digits_data += number_long_integ & 1;
number_long_integ >>= 1;
}
return (number_elements_sum_digits_data);
}
