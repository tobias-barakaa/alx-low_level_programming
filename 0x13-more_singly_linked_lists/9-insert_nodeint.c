#include "lists.h"

/**
 * insert_nodeint_at_index - nth node list
 * @head: pointer
 * @idx: index
 * @n: data
 * Return: the address of the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *element_node = NULL;
	listint_t *old_element = NULL;
	unsigned int i = 0;

	element_node = malloc(sizeof(listint_t));
	if (element_node == NULL || idx > listint_len(*head))
	{
		free(element_node);
		return (NULL);
	}
	element_node->n = n;
	element_node->next = NULL;
	while (head != NULL)
	{
		if (i == idx)
		{
			if (i == 0)
			{
				element_node->next = *head;
				*head = element_node;
				return (element_node);
			}
			element_node->next = old_element->next;
			old_element->next = element_node;
			return (element_node);
		}
		else if ((i + 1) == idx)
			old_element = *head;
		head = &((*head)->next);
		i++;
	}
	return (NULL);
}

/**
 * listint_len - elements in list
 * @h: header
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *loop = h;
	size_t elem = 0;

	while (loop != NULL)
	{
		elem += 1;
		loop = loop->next;
	}
	return (elem);
}
