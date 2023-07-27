#include "lists.h"

/**
 * add_node - adds a node at the beginning of the linked list
 *
 * @head: pointer to the first node of the list
 * @str: string to add to new node in the list
 *
 * Return: NULL if it fails / starting addr of the list
*/
list_t *add_node(list_t **head, const char *str)
{
int i;
size_t n = 0;
list_t *new;
if (str == NULL)
n = 0;
for (i = 0; str[i] != '\n'; i++)
n++;
new = malloc(sizeof(list_t));
if (new == NULL)
return (0);
new->str = strdup(str);
new->len = n;
new->next = NULL;
if (*head == NULL)
*head = new;
else
{
new->next = *head;
*head = new;
}
return (*head);
}
