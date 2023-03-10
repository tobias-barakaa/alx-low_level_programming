#include "main.h"

/**
 * _puts - prints a string
 * * @str: argument
 * Return: Return always 0
 */
void _puts(char *str)
{
        int z;

        for (z = 0; str[z] != '\0'; z++)
        {
                _putchar(str[z]);
        }
        _putchar('\n');
}
