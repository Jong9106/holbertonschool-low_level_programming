#include "lists.h"

/**
 * print_list - print number of nodes
 * @h: Popinter to head node
 * Return: Print number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", temp->len, temp->str);
		}
		temp = temp->next;
		i++;
	}
	return (i);
}
