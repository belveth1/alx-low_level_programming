#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->next = NULL;
	tmp->n = n;
	tmp->prev = NULL;

	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}
	else
	{
		tmp->next = *head;
		(*head)->prev = tmp;
		*head = tmp;
		return (tmp);
	}
}
