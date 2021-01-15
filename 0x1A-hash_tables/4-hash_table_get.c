#include "hash_tables.h"

/**
 * hash_table_get - Function that retrieves a value associated with a key
 * @ht: hash table to itarate
 * @key: element to compare against
 * Return: value associated
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	unsigned char *new_key = NULL;
	hash_node_t *current_node;

	if (!key || !ht)
		return (NULL);

	new_key = (unsigned char *)key;

	index = key_index(new_key, ht->size);

	if (ht->array[index])
	{
		current_node = ht->array[index];
		while (current_node)
		{
			if (!strcmp(current_node->key, key))
				return (current_node->value);
			current_node = current_node->next;
		}
	}
	return (NULL);
}
