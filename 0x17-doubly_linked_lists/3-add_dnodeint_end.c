#include "lists.h"

/**
 * add_dnodeint_end - function to add at the end
 * @head: head pointer
 * @n: element
 * Return: value to 
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
struct dlistint_s *pt = (struct dlistint_s *)malloc(sizeof(struct dlistint_s));
if (pt == NULL)
{
	return (NULL);
}
listint_s *end, start = head;
if(end)
{
	while (end->next)
		end = end->next;
	else
	{
		*head = start;
		start->prev = NULL;
	}

	return (start);
}
