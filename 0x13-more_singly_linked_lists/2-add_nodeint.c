#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the
 *              beginning of a list
 *
 * @head: pointer to the first node
 * @n: integer n to add in a new node
 *
 * Return: address of the new element or NULL if it fails
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
		if (*head == NULL)
		{
			ptr->n = n;
			ptr->next = NULL;
			*head = ptr;
		}

		else
		{
			ptr->n = n;
			ptr->next = *head;
			*head = ptr;
		}
			return (*head);
}
