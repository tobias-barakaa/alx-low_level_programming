#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - function list
 * @h: header pointer
 * @elements:
 * Return: elem
 */

size_t list_len(const list_t *h)
{
size_t elements = 0;

while (h != NULL)
{
++elements;
h = h->next;
}
return (elements);
}
