#include "lists.h"

/**
 * free_listint - function to free
 * @head: header
 * Return: return zero
 */

void free_listint(listint_t *head)
{
listint_t *node;

while (head != NULL)
{
node = head;
head = head->next;
free(head);
}
