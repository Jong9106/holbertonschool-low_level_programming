#include "lists.h"

/**
 * dlistint_len - function number of elements
 * @h: pointer to head
 * Return: Data inside of all nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
