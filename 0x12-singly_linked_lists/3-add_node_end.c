#include "lists.h"

/**
 * add_node_end - adds a node at the end of the linked list
 *
 * @head: pointer to the first node of the list
 * @str: string to add
 *
 * Return: NULL if it fails / starting addr of the list
*/
list_t *add_node_end(list_t **head, const char *str)
{
size_t n = 0;
list_t *ptr, *tmp;
if (str == NULL)
n = 0;
ptr = *head;
while (str[n] != '\0')
n++;
tmp = malloc(sizeof(list_t));
if (tmp == NULL)
return (NULL);
tmp->str = strdup(str);
tmp->len = n;
tmp->next = NULL;
if (ptr == NULL)
*head = tmp;
else
{
while (ptr->next != NULL)
ptr = ptr->next;
ptr->next = tmp;
}
return (*head);
}
