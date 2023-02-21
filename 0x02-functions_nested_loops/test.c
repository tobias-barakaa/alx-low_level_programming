#include <stdio.h>
/**
 * main - return sum of two numbers
 * sum: function to return sum of a and b
 * @a: first argument
 * @b: second argument
 * Return: always zero
 */

int sum(int a, int b)
{
	return (a + b);
}

int main(void)
{
	int result;

	result = sum(5, 4);
	printf("%d\n", result);

	return (0);
}

