#include <stdio.h>
#include "main.h"

/**
 * main - function main loop
 * @argv: argrument first
 * @argc: second params
 * Return: zero always
 */

int main(int argc, char **argv)
{
	int num;

	for (num = 0; num < argc; num++)
	{
		printf("%s\n", argv[num]);
	}
	return (0);
}
