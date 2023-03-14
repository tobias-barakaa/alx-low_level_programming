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

	   if (str == NULL) {
        return NULL;
    }
    size_t len = strlen(str) + 1;
    char *copy = (char *)malloc(len);
    if (copy == NULL) {
        return NULL;
    }
    memcpy(copy, str, len);
    return copy;
}
