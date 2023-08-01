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
	listint_t *ptr, *now;
	size_t i;

	ptr = malloc(sizeof(listint_t));
	if ((*head == NULL && idx != 0) || ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	now = *head;

	for (i = 0; now != NULL && i < idx; i++)
		now = now->next;

	if (idx == 0)
		*head = ptr;
	else if (now->next)
	{
		ptr->next = now->next;
		now->next = ptr;
	}
	else
		now->next = ptr;
	return (ptr);
}
