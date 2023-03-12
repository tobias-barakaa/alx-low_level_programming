#include <stdio.h>
#include "main.h"

/**
 * main - print number of prod
 * @argv: argrument first
 * @argc: second params
 */

int main(int argc, char **argv)
{
	int count;
	for (count=0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
			return (0);
}
