#include "lists.h"

/**
 * print_list - print elements in a linked list
 *
 * @h: pointer to head first node
 *
 * Return: Number of nodes
*/
size_t print_list(const list_t *h)
{
unsigned int count = 0;
if (h == NULL)
return (0);
while (h->next != NULL)
{
if (h->str == NULL)
printf("[%d] %s\n", 0, "(nil)");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
count += 1;
}
printf("[%d] %s\n", h->len, h->str);
count += 1;
return (count);
}
