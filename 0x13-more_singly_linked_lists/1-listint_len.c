#include "lists.h"

/**
 * listint_len - a function that returns the number of elements.
 *
 * @h: pointer to the first node
 *
 * Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	listint_t const *ptr;

	size_t nodes = 1;

	ptr = h;

	if (ptr == NULL)
		return (0);

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
		nodes++;
	}

	return (nodes);
}
