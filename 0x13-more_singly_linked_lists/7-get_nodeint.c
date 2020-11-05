#include "lists.h"

/**
 * get_nodeint_at_index - Fucntion to return a especific node
 * @head: Popinter to struct
 * @index: number of node to get
 * Return: Especific node in the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	while (temp != NULL)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}
