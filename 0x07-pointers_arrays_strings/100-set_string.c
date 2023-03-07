#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - sum of square matrix
 * @a: arr first
 * @size: sizeo
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, sum_1 = 0, sum_2 = 0;

	for (; i < size * size; i += size)
	{
		sum_1 += a[i + j];
		sum_2 += a[i + (size - 1) - j];
		j++;
	}
	printf("%d, %d\n", sum_1, sum_2);
}
