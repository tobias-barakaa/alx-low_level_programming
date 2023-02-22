#include <stdio.h>

/**
 * main - Print first 50 Fibonacci numbers
 *
 * Return: Return 0
 */
int main(void)
{
	long int f, s, c, sum;

	sum = 0;
	f = 0;
	s = 1;
	c = 0;
	while (c < 50)
	{
		sum = f + s;
		printf("%ld", sum);
		if (c != 49)
		{
			printf(", ");
		}
		f = s;
		s = sum;
		c++;
	}
	printf("\n");
	return (0);
}
