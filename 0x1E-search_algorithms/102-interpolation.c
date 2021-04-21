#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in an array
 * @array: entry array
 * @size: size of array
 * @value: to search
 * Return: position in array or -1 for error
 */

int interpolation_search(int *array, size_t size, int value)
{
	unsigned int low = 0, high = size - 1, i = 0;
	size_t pos = 0;

	if (array || size > 0)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
					(value - array[low]));

		if (pos >= size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		else if (array[pos] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			return (pos);
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			for (i = pos + 1; i < size; i++)
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
				if (array[i] == value)
				{
					return (i);
				}
			}
		}
	}
	return (-1);
}
