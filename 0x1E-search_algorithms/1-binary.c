#include "search_algos.h"

/**
 * binary_search - function that searches for a value in an array
 * @array: entry array
 * @size: size of array
 * @value: to search
 * Return: position in array or -1 for error
 */

int binary_search(int *array, size_t size, int value)
{
	unsigned int i = 0;
	unsigned int left = 0;
	unsigned int right = size - 1;
	unsigned int half = 0;


	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i != right)
			{
				printf("%d, ", array[i]);
			}
			else
			{
				printf("%d\n", array[i]);
			}
		}
		half = (left + right) / 2;
		if (array[half] == value)
		{
			return (half);
		}
		else if (array[half] > value)
		{
			right = half - 1;
		}
		else
		{
			left = half + 1;
		}
	}
	return (-1);
}
