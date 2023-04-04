#include "lists.h"

/**
 * listint_len - print elements
 * h:header
 * return: elements
 */

size_t listint_len(const listint_t *h)
{
	int elem = 0;
	
	while (h != NULL)
	{
		++ele;
		h = h->next;
	}
	return (elem);
}
