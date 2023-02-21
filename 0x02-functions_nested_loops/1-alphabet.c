#include <stdio.h>

/**
 * main - prints _putchar
 *
 * Description: prints _putchar
 *
 * Return: 0 (Success)
 */

void print_alphabet()
{
    char letter = 'a';
    while (letter <= 'z') {
        _putchar(letter);
        _putchar('\n');
        letter++;
    }
    _putchar('\n');
	return(0);
}
