#include "lists.h"
/**
 *sum_dlistint - sums values of all lists
 *@head: first argument of linked
 *Return: total
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	if (head == NULL)
	{
		return (total);
	}
	while (head)
	{
		total  += head->n;
		head = head->next;
	}
	return (total);
}
