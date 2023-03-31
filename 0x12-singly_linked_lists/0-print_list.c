#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - singly linked list
 * @h: pointer to the next
 * @next:
 * @counter:
 *Return:num
 */
size_t print_list(const list_t *h)
{

	const list_t *temp = h;
	int counter = 0;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
			printf("[%d] %s\n", temp->len, temp->str);
		counter++;
		temp = temp->next;
	}
	return (counter);
}
