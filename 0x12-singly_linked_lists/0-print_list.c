#include "lists.h"

/**
 * print_list - print elem
 * @h:pointer
 * Return: nodes num
 */

size_t print_list(const list_t *h)
{
	int numberElements = 0;

	while (h != 0)
	{
		if (h->str != NULL)
		printf("[%d] %s\n", h->len, h->str);
		else
		printf("[0] %p\n", h->str);
		h = h->next;
		numberElements++;
	}
	return (numberElements);
}
