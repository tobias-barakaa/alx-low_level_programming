#include "lists.h"


/**
 * print_listint - function to prints all the
 * elements of a listint_t list
 * @h: header
 * Return: return the elements
 */
size_t print_listint(const listint_t *h)
{
	while(h != NULL)
	{
		printf("%d/n", h->n);
		h = h->next;
	}
	return(h);
}
