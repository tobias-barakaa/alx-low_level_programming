#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - function to add beginn
 * @head: first argument head
 * @n: second argument
 * dlistint_s: data
 * Return: pt
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
struct dlistint_s *pt = (struct dlistint_s *)malloc(sizeof(struct dlistint_s));

if (pt == NULL)
{
return (NULL);
}
pt->n = n;
pt->prev = NULL;
pt->next = *head;
if (*head != NULL)
{
(*head)->prev = pt;
}
*head = pt;
return (pt);
}
