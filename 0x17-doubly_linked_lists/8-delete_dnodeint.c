#include "lists.h"

/**
 * delete_dnodeint_at_index - function to delete a node at index
 * @head: pointer to head node
 * @index: index to add the node
 * Return: 1 for succcess or -1 for error
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (temp && index == 0)
	{
		*head = (*head)->next;

		if (temp->next)
			temp->next->prev = NULL;

		free(temp);
		return (1);
	}

	while (temp)
	{
		temp = temp->next;
		i++;

		if (i == index)
		{
			temp->prev->next = temp->next;

			if (temp->next)
				temp->next->prev = temp->prev;

			free(temp);
			return (1);
		}

	}
	return (-1);
}
