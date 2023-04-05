#include "lists.h"

/**
 * add_node_end - adds at the end
 * @head: pointer
 * @str: string
 * Return: address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newElem;
list_t *ptrMove = *head;

newElem = malloc(sizeof(list_t));
if (newElem != NULL)
{
	newElem->str = strdup(str);
newElem->len = _strlen(str);
newElem->next = NULL;
}
else
return (NULL);
if (ptrMove != NULL)
{
	while (ptrMove->next != NULL)
	ptrMove = ptrMove->next;
ptrMove->next = newElem;
}
else
*head = newElem;
return (newElem);
}

/**
 * _strlen - strlen
 * @str: string 
 *
 * Return: ret len
 */
int _strlen(const char *str)
{
	int i = 0;

while (str[i] != '\0')
	i++;
return (i);
}
