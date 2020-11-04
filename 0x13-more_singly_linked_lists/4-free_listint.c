#include "lists.h"

/**
 * free_listint - function to free memory
 * @head: Popinter to struct
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;

		free(head);

		head = temp;
	}
	head = NULL;
}
