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
	char alphabet;
	for(alphabet = "a"; alphabet <= "z"; alphabet++) {
		_putchar("%c\n", alphabet);
	}
	_putchar("\n");
	return(0);
}
