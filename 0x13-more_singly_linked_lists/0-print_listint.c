#include"lists.h"
/**
 * print_listint - a function that prints all elements of a list
 *
 * @h: pointer to first node
 *
 * Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	listint_t const *ptr;

	size_t nodes = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", ptr->n);
		h = h->next;
		nodes++;
	}

	printf("%d\n", h->n);

	return (nodes);
}
