#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first argument
 * @s2: second argument
 * @n: third argument
 * Return: return zero always
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	    // Handle null inputs
    if (s1 == NULL) s1 = "";
    if (s2 == NULL) s2 = "";

    // Determine lengths of s1 and s2
    size_t len1 = strlen(s1);
    size_t len2 = strlen(s2);

    // Use entire s2 if n >= len2
    if (n >= len2) n = len2;

    // Allocate memory for concatenated string
    char *result = (char*)malloc(len1 + n + 1);

    if (result == NULL) {
        return NULL;
    }

    // Copy s1 and first n bytes of s2 into result
    memcpy(result, s1, len1);
    memcpy(result+len1, s2, n);

    // Add null terminator
    result[len1+n] = '\0';

    return result;
}
