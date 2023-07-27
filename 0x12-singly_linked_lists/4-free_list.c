#include "lists.h"

/**
 * free_list - free single list link
 *
 * @head: pointer to the first node of the list
 *
 * Return: nothing
*/
void free_list(list_t *head)
{
list_t *temp;
temp = head;
while (temp != NULL)
{
temp = temp->next;
free(head->str);
free(head);
head = temp;
}
}
