#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenate a string 
 * @char: first argument
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;
	while (*ptr != "\0")
	{
		ptr++;
	}
	while (*src != '\0') {
        *ptr = *src;
        ptr++;
        src++;
    }

	*ptr = '\0';
	return dest;
}
