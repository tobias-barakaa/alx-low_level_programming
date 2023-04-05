#include "lists.h"

/**
 * sum_listint - sum list
 * @head: header
 *Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *numCount = head;
	size_t elementCount = 0;

	while (numCount != NULL)
	{
		elementCount += numCount->n;
		numCount = numCount->next;
	}
	return (elementCount);
}
