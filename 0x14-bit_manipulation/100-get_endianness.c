#include "main.h"

/**
*get_endianness - checks the end of the code
*data: data argument first
*ptr: point to char
*char: pointer
*Return: function for endiassness

int get_endianness(void)
{
int data = 1;
char *ptr = (char *) &num;
return (*ptr == 1);
}
