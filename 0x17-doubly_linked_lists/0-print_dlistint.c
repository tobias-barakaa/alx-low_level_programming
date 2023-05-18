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
	int num = 0;

	struct dlistint_s current = h;
	while (head != NULL)
	{
		num++;
		current = current->next;
	}
	return (current);
}
