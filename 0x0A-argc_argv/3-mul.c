#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints multiples
 * @argc: first argument
 * @argv: argument second
 * Return: zero always
 */
int main(int argc, char *argv[])
{
int numq, numb;
if (argc == 3)
{
numq = atoi(argv[1]);
numb = atoi(argv[2]);
printf("%d\n", numq *numb);
return (0);
}
printf("Error\n");
return (1);
}
