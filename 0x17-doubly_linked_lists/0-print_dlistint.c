#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - doubly linked list print
 * @h:argument
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (head != NULL)
	{
		printf("%d\n", h->n);
                h = h->next;
		num++;
	}
	return (num);
}
