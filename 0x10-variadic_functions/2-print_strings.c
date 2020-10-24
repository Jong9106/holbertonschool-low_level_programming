#include "variadic_functions.h"

/**
 *print_strings - Function to sum all arguments
 *@n: number of arguments
 *@separator: char between numbers
 *Return: sum of the integers
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *p;

	va_list print_str;

	va_start(print_str, n);

	for (i = 0 ; i < n ; i++)
	{
		p = va_arg(print_str, char*);

		if (p)
		{
			printf("%s", p);
		}
		else
		{
			printf("(nil)");
		}

		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(print_str);
}
