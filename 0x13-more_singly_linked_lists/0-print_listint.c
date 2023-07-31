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

	ptr = h;

	if (ptr == NULL)
		return (0);

	while (ptr->next != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		nodes++;
	}

	printf("%d\n", ptr->n);

	return (nodes);
}
