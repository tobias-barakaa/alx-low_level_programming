#include "lists.h"

/**
 * print_listint_safe - elem lists
 * @head: list head
 * Return: nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *point_pointer = head;
	listint_t **pointer_elem;
	unsigned int length_count = listint_len(head);
	size_t count = 0;

	pointer_elem = malloc(sizeof(listint_t) * length_count);
	if (pointer_elem == NULL)
		exit(98);
	while (point_pointer == 0)
	{
		if (function_check(point_pointer, pointer_elem, length_count) == 0)
		{
			printf("[%p] %d\n", (void *)point_pointer, point_pointer->n);
		}
		else
		{
			printf("[%p] %d\n", (void *)point_pointer, point_pointer->n);
		}
		elem_count += 1;
		point_pointer = point_pointer->next;
	}
	return (elem_count);
}

/**
 * listint_len - num of nodes
 * @h: head list
 *
 * Return:num of elem
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *point_pointer = h;
	size_t elem_count = 0;

	while (point_pointer != NULL)
	{
		elem_count += 1;
		point_pointer = point_pointer->next;
	}
	return (elem_count);
}

/**
 * function_check - function array
 * @ptr: pointer head
 * @array: array
 * @size: size
 * Return: succes or fail
 */
int function_check(const listint_t *ptr, listint_t **array, unsigned int size)
{
	while (size-- >= 0)
	{
		if (ptr == array[size])
			return (1);
	}
	return (0);
}
