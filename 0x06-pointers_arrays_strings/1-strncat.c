/*
 * File: 1-strncat.c
 * Auth: Gedeon Obae Gekonge
 */

#include "main.h"

/**
 * _strncat -concatenates two strings
 * @dest: first argument
 * @src: second argument
 * @n: third argument
 * Return: Always return zero
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
