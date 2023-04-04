#include "lists.h"

/**
 *listint_len - print number of returned elements
 *h:header
 *return: return elem
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
