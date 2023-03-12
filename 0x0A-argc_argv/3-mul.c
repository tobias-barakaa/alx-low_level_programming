#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - function to multiply
 * @argv: first param
 * @argc: second param
 * Return: Return always zero
 */

int main(int argc, char **argv)
{
	int i;
	int result;
	int mutiple;

	for (i = 0; i < argc; i++)
	{
	mutiple = atoi(argv[i]);
	result =  mutiple;
	result *= result;
	}
	printf ("%d\n", result);
	return (1);
}


