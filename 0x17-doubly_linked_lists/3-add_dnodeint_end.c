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
pt->n = n;
pt->prev = NULL;
pt->next = *head;

struct dlistint_s *temp = *head;

  while (temp->next != NULL)
{
    temp = temp->next;
}
  temp->next = newNode;
  pt->prev = temp;

  return (pt);
}
