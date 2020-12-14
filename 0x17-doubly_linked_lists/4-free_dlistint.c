#include "lists.h"

/**
 * free_dlistint - Free memory from a list
 * @head: pointer to head pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
