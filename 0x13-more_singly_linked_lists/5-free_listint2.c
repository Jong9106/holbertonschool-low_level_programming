#include "lists.h"

/**
 * free_listint2 - function to free memory
 * @head: Popinter to struct
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	head = NULL;
}
