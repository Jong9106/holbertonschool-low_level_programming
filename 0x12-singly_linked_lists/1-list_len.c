#include "lists.h"

/**
 * list_len - print number of elements
 * @h: Popinter to head node
 * Return: Print number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;
	const list_t *temp = h;

	while (temp)
	{
		if (temp->str)
		{
			i++;
		}
		temp = temp->next;
	}
	return (i);


}
