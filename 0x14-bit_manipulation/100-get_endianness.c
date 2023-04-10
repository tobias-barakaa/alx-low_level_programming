#include "main.h"

/**
 * get_endianness - checks the end of the code
 * @data:
 * @kimba:
 * Return: function for endiassness
*/

int get_endianness(void)
{
unsigned int data = 1;

char *kimba = (char *)&data;

if (*kimba)
{
return (1);
}
return (0);
}
