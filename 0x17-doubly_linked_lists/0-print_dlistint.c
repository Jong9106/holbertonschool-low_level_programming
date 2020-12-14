#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a list
 * @h: pointer to head
 * Return: Data inside of all nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
