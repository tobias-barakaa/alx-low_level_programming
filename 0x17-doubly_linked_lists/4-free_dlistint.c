#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to the head of the list
 * Return: value
 */
void free_dlistint(dlistint_t *head)
{
		dlistint_t *actual_node;
	dlistint_t *next_node;

	if (head)
	{
		current = head;
		next_elem = head->next;
		while (next_elem)
		{
			free(current);
			current = next_elem;
			next_elem = next_elem->next;
		}
		free(current);
	}
}
