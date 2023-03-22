#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints opcodes
 *
 *@argc:arguement count
 *@argv:arguement vector
 *
 *Return:int
 *
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *p = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < bytes - 1; i++)
	{
		printf("%02hhx ", p[i]);
	}
	printf("%02hhx\n", p[i]);
	return (0);
}
