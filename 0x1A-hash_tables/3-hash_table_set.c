#include "hash_tables.h"

/**
 * hash_table_set -  Function that adds an element to the hash table.
 * @ht: has table to add the element
 * @key: element to add in the node
 * @value: value to the key to add in the node
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *new_key = NULL;
	char *new_value = NULL;
	unsigned long int index = 0;
	hash_node_t *new_node = NULL;
	hash_node_t *current_node = NULL;

	index = key_index(((const unsigned char *)key), ht->size);

	if (!ht || !key)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_key = ((char *)key);
	new_value = ((char *)value);
	new_node->key = new_key;
	new_node->value = new_value;
	
	ht->array[index] = new_node;

	if (ht->array[index])
	{
		current_node = ht->array[index];
		new_node->next = current_node;
	}

	new_node->next = NULL;


	return (1);

}
