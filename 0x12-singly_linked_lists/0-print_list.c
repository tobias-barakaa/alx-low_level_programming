#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @h: pointer
 * @next: points to the next node
 * @num: number of return
 * Description: singly linked list node structure
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;
    while(h != NULL)
    {
	    if(h->str == NULL)
	    {
		    printf("[0] (nil)\n");
	    }
	    else 
	    printf("[%d] %s\n", h->len, h->str);
	    
	    num++;
	    h = h -> next;

    }
    return num;
}

