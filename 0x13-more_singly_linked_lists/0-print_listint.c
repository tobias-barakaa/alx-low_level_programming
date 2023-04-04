#include "lists.h"

/**
* print_listint - function to prints all the
* elements of a listint_t list
* @h: header
* Return: return the elements
*/

size_t print_listint(const listint_t *h)
{
	size_t nod = 0;
	while(h != NULL)
	{
		++nod;
		printf("%d/n", h->n);
		h = h->next;
	}
	return(nod);
}
