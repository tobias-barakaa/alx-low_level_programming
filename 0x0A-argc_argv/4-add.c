#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - function check
 *
 * @c: argument
 *
 * Return: zero always
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/**
 * main - adds
 *
 * @argc: first argument
 * @argv: second argument
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int x, y, radd = 0;
	char *a = NULL;

	if (argc <= 2)
	{
		printf("0\n");
		return (0);
	}

	for (x = 1; x < argc; x++)
	{
		a = argv[x];
		for (y = 0; a[y] != '\0'; y++)
		{
			if (_isdigit(a[y]) != 1)
			{
				printf("Error\n");
				return (1);
			}
		}
		radd += atoi(argv[x]);
	}

	printf("%d\n", radd);

	return (0);
}
