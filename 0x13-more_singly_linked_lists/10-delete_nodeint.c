#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node
 * @head: pointer
 * @index: added index
 *Return: address
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *elem_prev = NULL;
	listint_t *node_current = NULL;
	unsigned int i = 0, list_len = listint_len(*head);

	if ((index > list_len) || (list_len == 0))
		return (-1);
	while (head != NULL)
	{
		if (i == index)
		{
			elem_prev = *head;
			if (i == 0)
			{
				*head = elem_prev->next;
				free(elem_prev);
				return (1);
			}
			node_current->next = elem_prev->next;
			free(elem_prev);
			return (1);
		}
		else if ((i + 1) == index)
			node_current = *head;
		head = &((*head)->next);
		i++;
	}
	return (-1);
}

/**
 * listint_len - len
 * @h: head of the list
 * Return: elems
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *point_to = h;
	size_t elems = 0;

	while (point_to != NULL)
	{
		elems += 1;
		point_to = point_to->next;
	}
	return (elems);
}
