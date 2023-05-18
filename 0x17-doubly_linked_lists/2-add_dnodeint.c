#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - function to add beginn
 * @head: first argument head
 * @n: second argument
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	while (h != NULL)
	{
		if (head->n == n)
			return (dlistint_t *)h;
        h = h->next;
	}
	return NULL;
}
