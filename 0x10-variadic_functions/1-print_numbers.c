#include "variadic_functions.h"

/**
 *print_numbers - Function to prints numbers with a char
 *@n: number of arguments
 *@separator: char between numbersy
 *Return: print the numbers and separator
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int p;
	va_list print_num;

	va_start(print_num, n);

	for (i = 0 ; i < n ; i++)
	{
		p = va_arg(print_num, int);
		printf("%d", p);

		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(print_num);
}
