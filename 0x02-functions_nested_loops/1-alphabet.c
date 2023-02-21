#include <stdio.h>

/**
 * main - prints _putchar
 *
 * print_alphabet - function to print alphabet without using printf
 *
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
    char letter = 'a';
    while (letter <= 'z'){ 
        _putchar(letter);
        letter++;
}
    _putchar('\n');
	return(0);
}
