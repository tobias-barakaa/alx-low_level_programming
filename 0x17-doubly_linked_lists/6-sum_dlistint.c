#include "lists.h"
/**
 *sum_dlistint - sums all values of each element of the doubly link list
 *@head: double liked list
 *Return: int value of the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
