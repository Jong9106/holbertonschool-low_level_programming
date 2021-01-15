#include "hash_tables.h"

/**
 * key_index - Function to give a index to a key
 * @key: char with the key
 * @size: number of index in the array
 * Return: index for a key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int new_index = 0;

	new_index = hash_djb2(key);

	new_index %= size;

	return (new_index);
}
