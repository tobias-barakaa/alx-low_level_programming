#include "main.h"

/**
 * _isalpha - function that returns one if its a letter
 * @c: a variable
 * Return: Return one if uppercase else zero
 */

int _isalpha(int c)
{
        if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
