#include "lists.h"

/**
 * add_nodeint - function to add
 * @head: pointer to pointer
 * @n: data to insert
 * Return: return add
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *elements;

elements = malloc(sizeof(listint_t));
if (elements == NULL)
return (NULL);
elements->n = n;
elements->next = *head;
*head = elements;
return (elements);
}
