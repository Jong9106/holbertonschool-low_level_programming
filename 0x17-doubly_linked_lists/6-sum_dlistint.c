#include "lists.h"

/**
 * sum_dlistint - function to add data in nodes
 * @head: pointer to head node
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
