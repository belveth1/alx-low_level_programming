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
	listint_t *ptr, *temp;
	size_t i;

	if (*head == NULL)
		return (-1);

	ptr = *head;
	for (i = 0; ptr != NULL && i < index - 1; i++)
		ptr = ptr->next;

	temp = ptr->next;
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
	}

	else if (temp->next != NULL)
	{
		ptr->next = temp->next;
		free(temp);
	}

	else
	{
		ptr->next = NULL;
		free(temp);
	}
	return (1);
}
