#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - lenth elements
 * @h: arguments
 */

size_t dlistint_len(const dlistint_t *h)
{
	int num = 0;
	
	while (num != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
