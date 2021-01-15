#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set -  Function that adds an element to the hash table.
 * @ht: has table to add the element
 * @key: element to add in the node
 * @value: value to the key to add in the node
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_node;
	hash_node_t *old_node;

	index = key_index(((unsigned char *)key), ht->size);

	if (!ht  || !ht->array || !key || !value || strlen(key) == 0)
		return (0);

	if (ht->array[index])
	{
		old_node = ht->array[index];
		while (old_node)
		{
			if (!(strcmp(old_node->key, key)))
			{
				free(old_node->value), old_node->value = strdup(value);
				return (1);
			}
			old_node = old_node->next;
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (!new_node->key || !new_node->value)
	{
		if (new_node->key)
			free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
