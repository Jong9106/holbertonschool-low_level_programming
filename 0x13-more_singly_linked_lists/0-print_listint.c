#include "lists.h"

/**
 * print_listint - print number of elemnt
 * @h: Popinter to head node
 * Return: Print number of element
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
