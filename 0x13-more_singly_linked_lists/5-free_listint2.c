#include "lists.h"

/**
 * free_listint2 - free memory functions
 * @head: pointer 
 * Return: NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *now;
	listint_t *next;

	if (head == NULL)
		return;
	if (*head == NULL)
		return;

	current = *head;
	while (current != NULL)
	{
		next = now->next;
		free(now);
		now = next;
	}
	*head = NULL;
}
