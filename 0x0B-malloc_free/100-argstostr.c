#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function to concatenates
 * @ac: first argument
 * @av: second argument
 * Return: return zero always
 */

char *argstostr(int ac, char **av) {
    if (ac == 0 || av == NULL) {
        return NULL;
    }
    size_t total_length = 0;
    for (int i = 0; i < ac; i++) {
        total_length += strlen(av[i]) + 1;
    }
    char *str = (char *)malloc(total_length);
    if (str == NULL) {
        return NULL;
    }
    size_t pos = 0;
    for (int i = 0; i < ac; i++) {
        size_t len = strlen(av[i]);
        memcpy(str + pos, av[i], len);
        pos += len;
        str[pos++] = '\n';
    }
    str[pos] = '\0';
    return str;
}
