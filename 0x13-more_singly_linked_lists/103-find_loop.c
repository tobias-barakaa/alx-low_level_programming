#include "lists.h"

/**
 * find_listint_loop - link looped lists
 * @head: head pointer
 * Return: address 
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *elemente, *head_point;
elemente = head_point = head;
while (elemente != NULL && head_point != NULL)
{
elemente = elemente->next;
head_point = head_point->next->next;

if (elemente == head_point)
{
elemente = head;
while (elemente != head_point)
{
elemente = elemente->next;
head_point = head_point->next;
}
return (elemente);
}
}
return (NULL);
}
