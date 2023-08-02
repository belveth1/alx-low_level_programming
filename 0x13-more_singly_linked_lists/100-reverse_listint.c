#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *temp2;

	temp2 = NULL;
	temp = NULL;

	if (*head == NULL)
		return (NULL);

	while (*head)
	{
		temp2 = (*head)->next;
		(*head)->next = temp;
		temp = (*head);
		(*head) = temp2;
	}
		(*head) = temp;

		return (*head);
}

