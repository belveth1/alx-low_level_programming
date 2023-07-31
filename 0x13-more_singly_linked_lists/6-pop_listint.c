#include "lists.h"

/**
 * pop_listint - deletes head of the node
 *
 * @head: pointer to the first node in the list
 *
 * Return: the head's node's data (n)
*/
int pop_listint(listint_t **head)
{
	int data;
	listint_t *ptr;

	if (*head == NULL)
		return (0);

	ptr = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(ptr);
	return (data);
}
