#include "lists.h"

/**
 * free_listint2 - function that free memory of all list.
 * @head: pointer to head in function
 * Return: Always success.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	if (head == NULL)
		return;
	if (*head == NULL)
		return;

	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
