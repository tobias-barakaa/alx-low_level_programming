#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: list argument
 * Return: no return
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (head != NULL)
		while (head->prev != NULL)
		{
			head = head->prev;
		}

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current);
	}
}
