#include "lists.h"

/**
 * add_node_end - Create a new node at the end on list_t
 * @head: Pointer to struct
 * @str: Popinter to entry elements
 * Return: new node at the on list_t
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *new_node;
	list_t *last_node = *head;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	for (; str[i] != '\0' ; i++)
	{
	}
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}

		last_node->next = new_node;
	}
	return (new_node);
}
