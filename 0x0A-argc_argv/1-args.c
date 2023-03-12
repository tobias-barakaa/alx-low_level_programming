#include <stdio.h>
#include "main.h"

/**
 * main - print number of index
 * @argv: argrument first
 * @argc: second params
 * Return: always zero
 */

int main(int argc, char **argv)
{
	(void)argv;
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
