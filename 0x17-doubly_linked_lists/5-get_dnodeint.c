#include "lists.h"

/**
 * get_dnodeint_at_index - function to add a node atthe end
 * @head: pointer to head node
 * @index: data to add in new node
 * Return: Data inside of all nodes
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = head;

	while (temp)
	{

		if (i == index)
			return (temp);

		temp = temp->next;
		i++;
	}
	return (NULL);
}
