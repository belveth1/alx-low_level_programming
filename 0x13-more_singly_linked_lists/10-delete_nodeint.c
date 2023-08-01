#include"lists.h"

/**
  * delete_nodeint_at_index - function delete a list with specific index
  *
  * @head: pointer to the first node
  * @index: the value of the index
  *
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	size_t i;

	if (*head == NULL)
		return (-1);

	current = *head;
	previous = *head;

	for (i = 0; current != NULL && i < index  ; i++)
	{
		previous = current;
		current = current->next;
	}
	if (current == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	else if (current->next != NULL)
	{
		previous->next = current->next;
		free(current);
	}

	else
	{
		free(current);
		previous->next = NULL;
	}
	return (1);
}
