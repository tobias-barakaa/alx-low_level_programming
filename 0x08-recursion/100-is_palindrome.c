#include "main.h"
int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - palindrome
 * @s:argument
 * Return: 0
 */
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - r
 * @s: string to calculate the length of
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - for palindrome
 * @s: secodne argument
 * @i: iteate
 * @len: length
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int i, int len)
{
if (*(s + i) != *(s + len - 1))
return (0);
if (i >= len)
return (1);
return (check_pal(s, i + 1, len - 1));
}
