#include "search_algos.h"

/**
 * jump_search - function that searches for a value in an array
 * @array: entry array
 * @size: size of array
 * @value: to search
 * Return: position in array or -1 for error
 */

int jump_search(int *array, size_t size, int value)
{
	int i = 0;
	unsigned int jump = 0;
	unsigned int j = 0;


	if (array)
	{
		while (jump < size && array[jump] < value)
		{
			i = jump;
			jump += sqrt(size);
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
		}
		printf("Value found between indexes [%d] and [%d]\n", i, jump);
		j = i;
		for (; j <= jump; j++)
		{
			if (j < size)
			{
				printf("Value checked array[%d] = [%d]\n", j, array[j]);
				if (array[j] == value)
				{
					return (j);
				}
			}
		}
	}
	return (-1);
}
