#include "function_pointers.h"

/**
 *int_index - funtion to print index
 *@array : array in main
 *@size : size of the array
 *@cmp : pinter to compare in array
 *
 *Return: i
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int j;

	if (!array || !size || !cmp)
	{
		return (-1);
	}

	for (i = 0 ; i < size ; i++)
	{
		j = cmp(array[i]);

		if (j)
		{
			return (i);
		}
	}

	return (-1);
}
