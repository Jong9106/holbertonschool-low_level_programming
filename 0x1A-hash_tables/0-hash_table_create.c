#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - Function to create a hash-table.
 * @size: number of index in the array
 * Return: EXIT_SUCCESS.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	hash_node_t **head = NULL;

	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;

	head = calloc(size, sizeof(hash_node_t *));
	if (!head)
		return (NULL);

	table->array = head;

	return (table);
}
