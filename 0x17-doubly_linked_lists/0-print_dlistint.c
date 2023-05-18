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
	struct dlistint_s *current = head;
	while (head != NULL)
	{
		current = current->next;
		return (current);
	}
}
