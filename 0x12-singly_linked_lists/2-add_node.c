#include "main.h"

/**
 * *add_node - function to add list
 * head: pointer
 * str: string
 */

list_t *add_node(list_t **head, const char *str)
{
	head = NULL;
	list_t *newNode;
	newNode = (list_t)malloc(sizeof(list_t));
       if (newNode == NULL)
       {
return (NULL);
       }
       newNode->str = strdup(str);
       if (newNode->str == NULL)
       {
	       free (newNode);
	       return NULL;
       }
       newNode->len = strlen(str);
       newNode->next = *head;
       *head = newNode;
       return newNode;
}      
