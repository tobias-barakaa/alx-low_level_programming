#include "lists.h"

/**
 * free_listint - function to free
 * @head: header
 * Return: return zero
 */

void free_listint(listint_t *head)
{
	if (head->next == NULL){
		free(head);
		head = NULL;
	}
	else {
		listint_t *new = head;
		listint_t *old = head;
		while (new->next != NULL) {
			old = new;
			new = new->next;
		}
		old->next = NULL;
		free(new);
		new = NULL;
	}
	return (0);
}
