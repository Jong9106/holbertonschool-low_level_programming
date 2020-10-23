#include "variadic_functions.h"

/**
 *sum_them_all - Function to sum all arguments
 *@n: number of arguments
 *Return: sum of the integers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num_list;
	unsigned int i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(num_list, n);

	for (i = 0 ; i < n ; i++)
	sum += va_arg(num_list, int);

	va_end(num_list);
		return (sum);
}
