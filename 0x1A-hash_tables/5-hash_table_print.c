#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	int i = 0;
	hash_node_t *current_node;

	if (ht)
	{
		putchar(123);
		for (index = 0; index < ht->size; index++)
		{
			current_node = ht->array[index];
			while (current_node)
			{
				if (i > 0)
					printf(", ");

				printf("'%s': '%s'", current_node->key, current_node->value);
				i++;
				current_node = current_node->next;
			}
		}
			putchar(125);
			putchar(10);
	}
}
