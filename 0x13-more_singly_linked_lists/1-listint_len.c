#include "lists.h"

/**
 * listint_len - return number of returned elements
 * @h:header
 * Return: return elem
 */

size_t listint_len(const listint_t *h)
{
size_t elem = 0;

while (h != NULL)
{
++elem;
h = h->next;
}
return (elem);
}
