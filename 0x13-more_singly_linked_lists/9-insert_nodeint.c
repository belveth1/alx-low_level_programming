#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node at
 *                           a given position
 *
 * @head: pointer to the first node of the list
 * @idx: is the index of the list where the new node should be added
 * @n: element to add to the new node
 *
 * Return: NULL if anything fails or the address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *current;
	size_t i;

	ptr = malloc(sizeof(listint_t));
	if ((*head == NULL && idx != 0) || ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	current = *head;

	for (i = 0; head != NULL && i < idx - 1; i++)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
	}


	if (idx == 0)
	{
		ptr->next = *head;

		*head = ptr;
		return (*head);
	}
	else if (current->next)
	{
		ptr->next = current->next;
		current->next = ptr;
	}
	else
		current->next = ptr;
	return (ptr);
}
