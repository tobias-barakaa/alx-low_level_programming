#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - function to add beginn
 * @head: first argument head
 * @n: second argument
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	struct dlistint_s  *ptr = (struct dlistint_s *)malloc(sizeof(struct dlistint_s));  

	 if(ptr == NULL)
	 {
		 return NULL;
	 }
		 ptr->next = NULL;
		 ptr->prev = NULL;
		 ptr->n = n;
    if (*head != NULL)
    {
        (*head)->prev = ptr;
	(*head)->next = ptr;
    }
    return ptr;
}
