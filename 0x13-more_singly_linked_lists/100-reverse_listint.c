#include "lists.h"

/**
 * reverse_listint - function that reverse a list
 * @head: pointer to head in function
 * Return: pointer to the first node of new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	if (head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
