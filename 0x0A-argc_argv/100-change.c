#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints minimum
 * make arument change
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int num, j, result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins[j])
		{
			result++;
			num -= coins[j];
		}
	}

	printf("%d\n", result);
	return (0);
}
