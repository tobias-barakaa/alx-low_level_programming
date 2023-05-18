#include "lists.h"

/**
 * add_dnodeint_end - function to add at the end
 * @head: head pointer
 * @n: element
 * Return: value to 
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *pt, *end = *head;
        *pt = malloc(sizeof(dlistint_t));

if (pt == NULL)
{
	return (NULL);
}
pt->n = n;
	pt->next = NULL;

	if (end)
	{
		while (end->next)
        {
			end = end->next;
        }
		pt->prev = end;
		end->next = pt;
	}
	else
	{
		*head = pt;
		pt->prev = NULL;
	}

	return (pt);
}
