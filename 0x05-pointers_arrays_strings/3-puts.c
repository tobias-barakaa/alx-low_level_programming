#include "main.h"

/**
 * _puts - prints stdt
 * @str: arguments
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