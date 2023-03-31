#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - singly linked list
 * @h: pointer to the next
 * @next:
 * @num:
 *Return:num
 */
size_t print_list(const list_t *h)
{
size_t num;
num = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[%d] %s\n", 0, "(nil)");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
num++;
}
return (num);
}
