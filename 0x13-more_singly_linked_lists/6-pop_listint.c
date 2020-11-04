#include "lists.h"

/**
 * pop_listint - Function to delete a node in the head
 * @head: Adress of a pointer to structure
 * Return: Data of deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int save = 0;

	if (*head == NULL)
	{
		return (0);
	}

	else
	{
		save = (*head)->n;
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (save);
	}
}
