#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to head of the list
 * @index: index of the node to search for, starting from 0
 * Return: nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n;
	dlistint_t *ptr;

	n = 0;

	if (head == NULL)
		return (NULL);

	ptr = head;
	while (ptr)
	{
		if (index == n)
			return (ptr);
		ptr = ptr->next;
		n++;
	}
	return (NULL);
}
