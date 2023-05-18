#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to the head of the list
 * Return: value
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *now = head;
    
    while (now != NULL)
    {
        next = now->next;
        free(now);
        now = next;
    }
}
