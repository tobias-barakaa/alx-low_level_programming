#include "lists.h"

/**
 * sum_dlistint - function to add
 * @head: argums first
 * Return 0
 */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *current = head;	

if (head == NULL || prev == NULL)
	return (0);
	while (head != NULL || prev != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
