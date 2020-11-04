#include "lists.h"

/**
 * listint_len - Functio tu print number of elements
 * @h: Popinter to head node
 * Return: Print number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *temp = h;

	while (temp)
	{
		if (temp->n)
		{
			i++;
		}
		temp = temp->next;
	}
	return (i);
}
