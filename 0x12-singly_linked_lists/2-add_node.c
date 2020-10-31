#include "lists.h"

/**
 * add_node - Create a new node in list_t
 * @head: Pointer to struct
 * @str: Popinter to entry elements
 * Return: new node in list_t
 */

list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	for (; str[i] != '\0' ; i++)
	{
	}
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
