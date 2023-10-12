#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *ptr;

	tmp = malloc(sizeof(dlistint_t));
	ptr = malloc(sizeof(dlistint_t));
	if (tmp == NULL || ptr == NULL)
		return (NULL);

	tmp->next = NULL;
	tmp->prev = NULL;
	tmp->n = n;

	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}
	ptr = *head;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = tmp;
	tmp->prev = ptr;
	return (tmp);
}
