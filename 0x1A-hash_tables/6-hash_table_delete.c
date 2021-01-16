#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *current_node;

	if (ht)
	{
		for (index = 0; index < ht->size; index++)
		{
			while (ht->array[index])
			{
				current_node = ht->array[index];
				ht->array[index] = ht->array[index]->next;

				free(current_node->key);
				free(current_node->value);
				free(current_node);
			}
		}
		free(ht->array);
		free(ht);
	}
}
