#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to newly created
 * @str: first argument
 * Return: return NULL
 */

char *_strdup(char *str)
{

    char *p;
    char *src
    int len = 0;
    while (str[len])
        len++;
    src = malloc(len + 1);
    p = str;
    while (*str)
        *p++ i= *str++;
    *p = '\0';
    return src;
}
