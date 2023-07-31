#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node
 *            at the end of the node
 *
 * @head: pointer to the first node of the list
 * @n: element int to add to new node
 *
 * Return: address of the new element or NULL if it fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	temp = *head;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (temp == NULL)
		*head = ptr;

	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = ptr;
	}
	return (*head);
}
