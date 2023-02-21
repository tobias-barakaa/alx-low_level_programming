#include <stdio.h>

/**
 * main - prints _putchar
 *
 * Description: prints _putchar
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char alphabet = "a";
	while(alphabet <= "z") {
	_putchar("\n", alphabet);
	alphabet++;
	}
	_putchar("\n");
	return(0);
}
