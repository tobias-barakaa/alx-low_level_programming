#include <stdio.h>

/**
 * main - prints_alphabet
 *
 * print_alphabet - function to print alphabet without using printf
 * @void: first argument
 * Return: 0 Always
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
