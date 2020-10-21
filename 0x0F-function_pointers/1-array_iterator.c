#include "function_pointers.h"

/**
 *array_iterator - prints a name
 *@array: array in the main
 *@size: size of array
 *@action: function pointer
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action && array && size)
	{
		for (i = 0 ; i < size ; i++)
		action(array[i]);
	}
}
