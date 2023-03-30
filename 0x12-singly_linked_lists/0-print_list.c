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
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

size_t print_list(const list_t *h)
{
    struct list_s *next;
    while (h != NULL)
    {
        if (h->next != h->str)
        {
            printf("[0] (nil)")
        }
        else
        {
            h->next = h->str;
            h->str = h->next;
            h->next = h->len;
            h->len = h->next;
            printf("%c, %d", h->str, h->len);
        }
    }
}

