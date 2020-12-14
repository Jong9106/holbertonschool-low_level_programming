#include "lists.h"

/**
 * add_dnodeint_end - function to add a node atthe end
 * @head: pointer to head pointer
 * @n: data to add in new node
 * Return: Data inside of all nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!temp)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		while (temp->next)
			temp = temp->next;

		new_node->prev = temp;
		temp->next = new_node;
	}
	return (new_node);

}
