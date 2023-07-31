#include "lists.h"

/**
 * free_listint - free list
 *
 * @head: pointer to the first node of the list
 *
 * Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *ptr;

	ptr = head;
	while (ptr->next != NULL)
	{
		head = ptr->next;
		free(ptr->n);
		free(ptr);
		ptr = head;
	}
	free(head);
}
