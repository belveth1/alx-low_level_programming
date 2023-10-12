#include"lists.h"
/**
 * dlistint_len - count all the elements of a list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t count = 0;

	if (h == NULL)
		return (count);
	ptr = h;
	while (ptr)
	{
	ptr = ptr->next;
	count++;
	}
	return (count);
}
