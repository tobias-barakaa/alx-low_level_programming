#include "lists.h"
/**
 * add_nodeint_end - functions to add to end
 * @head: header
 * @n:interger
 * Return: return NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_elem current_elem;
	new_elem = malloc(sizeof(listint_t));
	if(new_elem == NULL)
		return NULL;
	new_elem->n = n;
	new_elem->next = NULL;
	
	if (*head == NULL){
		*head = new_elem;
		return new_elem;
	}
	current_elem = *head;
	while (current_elem->next != NULL) {
		current_elem = current_elem->next;
	}
	current_elem = new_elem;
	return new_elem;
}
