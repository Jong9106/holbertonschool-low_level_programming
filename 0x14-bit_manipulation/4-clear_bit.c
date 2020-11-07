#include "holberton.h"

/**
 * clear_bit - Fucntion to set a bit to 0 in a given position
 * @n: Pointer to a given number
 * @index: position to change the value
 * Return: return 1 for success and -1 for error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index >= (sizeof(*n) * 8))
		return (-1);


	*n = *n & ~(1 << index);
		return (1);
}
