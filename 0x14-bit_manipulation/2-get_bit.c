#include "holberton.h"

/**
 * get_bit - Function to return the value of a bit
 * @n: given number
 * @index: size of the index
 * Return: Value of the bit or -1 for error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int k;

	if (index >= (sizeof(n) * 8))
		return (-1);

	k = n >> index;

	return (k & 1);
}
