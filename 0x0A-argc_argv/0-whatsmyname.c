#include "main.h"
#include <stdio.h>

/**
 * main - function to print name
 * @argc: first pameteer
 * @argv: second parameter
 * Return: return zero alwasys
 */
int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
