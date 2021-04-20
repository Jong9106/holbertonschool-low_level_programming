#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array
 * @array: entry array
 * @size: size of array
 * @value: to search
 * Return: position in array or -1 for error
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	if (array == NULL)
	{
		return (-1);
	}

	for (; array[i]; i++)
	{
		if (i >= size)
		{
			return (-1);
		}
		if (array[i] == value)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			return (i);
		}
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}
	return (0);
}
