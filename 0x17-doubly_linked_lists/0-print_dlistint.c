#include"lists.h"
/**
 * print_dlistint - prints all the elements of a list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t count = 0;

	if (h == NULL)
		return (count);
	ptr = h;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
