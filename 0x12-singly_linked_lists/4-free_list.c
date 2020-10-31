#include "lists.h"

/**
 * free_list - Free the list in memory allocated
 * @head: Pointer to struct
 * Return: Free memory
 * This code was made under the influence of halloween
 */
void free_list(list_t *head)
{

	list_t *kill_bill;

	while (head != NULL)
	{
		kill_bill = head->next;

		free(head->str);
		free(head);
		head = kill_bill;
	}
	head = NULL;
}

