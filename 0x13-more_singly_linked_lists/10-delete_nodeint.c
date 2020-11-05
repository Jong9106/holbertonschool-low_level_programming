#include "lists.h"

/**
 * delete_nodeint_at_index - Delete a node in a given position
 * @head: Pointer to adress of head
 * @index: number of node to delete
 * Return: 1 to success, -1 its it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nextn, *temp = *head;
	unsigned int i;

	if (index == 0)
	{
		if (temp)
		{
			*head = temp->next;
			free(temp);
			return (1);
		}
		return (-1);
	}
	for (i = 1; i <= (index - 1); i++)
	{
		temp = temp->next;
		if (!temp)
			return (-1);
	}

	nextn = temp->next;
	temp->next = nextn->next;
	free(nextn);
	return (1);
}
