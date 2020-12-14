#include "lists.h"

/**
 * insert_dnodeint_at_index - function to add node at index
 * @h: pointer to head node
 * @idx: index to add the node
 * @n: data to add in new node
 * Return: Data inside of all nodes
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	unsigned int i = 0;
	dlistint_t *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));

	/* asignar el dato*/
	new_node->n = n;

	/*si la lista esta vacia*/
	while (!temp)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		return (new_node);
	}

	while (temp->next)
	{
		temp = temp->next;
		i++;

		if (i == idx)
		{
			new_node->prev = temp->prev;
			temp->prev = new_node;
			new_node->next = temp;
			new_node->prev->next = new_node;
			return (new_node);
		}
		/* si el idx es mayor a la lista*/
		if (temp->next == NULL)
			return (add_dnodeint_end(h, n));
	}
	return (NULL);
}
