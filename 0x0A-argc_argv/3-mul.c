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
	if (argc != 3) {
        printf("Error\n");
        return 1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    int result = num1 * num2;
    printf("%d\n", result);

    return 0;
}
