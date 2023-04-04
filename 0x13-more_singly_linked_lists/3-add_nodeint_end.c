#include "lists.h"
/**
 * add_nodeint_end - functions to add to end
 * @head: header
 * @n:interger
 * Return: return NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_elem;
	new_elem = malloc(sizeof(listint));
	while (head->next != NULL) 
		if (new_elem == NULL)
			return (NULL);
		else
			head = head->next;
	return head;
}
