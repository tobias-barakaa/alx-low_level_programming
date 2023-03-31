#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * size_t list_len - function list
 * @h: header
 * Return: nodes
 */

size_t list_len(const list_t *h)
{
	while (h != NULL)
	{
		h->str = h->str;
		h->len = h->len;
		h->next = h;
		return h;
	}
}
