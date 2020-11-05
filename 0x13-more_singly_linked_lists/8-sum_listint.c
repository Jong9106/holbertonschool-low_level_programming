#include "lists.h"

/**
 * sum_listint - Function to sum data in the nodes
 * @head: Popinter to a structure
 * Return: Sum of nodes data
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
	{
		return (0);
	}

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
