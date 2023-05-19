#include "lists.h"

/**
 * add_dnodeint_end - node add func
 * @head: first argument head
 * @n: elem val
 * Return: add
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *curr = *head;
dlistint_t *next_curr;
next_curr = malloc(sizeof(dlistint_t));
if (next_curr == NULL)
return (NULL);
next_curr->n = n;
next_curr->next = NULL;
if (curr != NULL)
{
while (curr->next != NULL)
{
curr = curr->next;
}
curr->next = next_curr;
}
else
{
*head = next_curr;
}
next_curr->prev = curr;

return (next_curr);
}
