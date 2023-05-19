#include "lists.h"

/**
 * delete_dnodeint_at_index - delete index
 * @head: first argument head
 * @index: index
 * Return: true or false
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current;
dlistint_t *next_current;
unsigned int k;

current = *head;

if (current != NULL)
while (current->prev != NULL)
current = current->prev;

k = 0;

while (current != NULL)
{
if (k == index)
{
if (k == 0)
{
*head = current->next;
if (*head != NULL)
{
(*head)->prev = NULL;
}
}
else
{
next_current->next = current->next;
if (current->next != NULL)
{
current->next->prev = next_current;
}
}
free(current);
return (1);
}
next_current = current;
current = current->next;
k++;
}
return (-1);
}
