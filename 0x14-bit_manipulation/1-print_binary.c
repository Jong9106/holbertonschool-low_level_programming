#include "holberton.h"

/**
 * print_binary - Function to print in binary
 * @n: decimal to conver to binary
 *
 */

void print_binary(unsigned long int n)
{
	unsigned long int k;
	int c;

	if (n == 0)
	{
		_putchar('0');
	}

	for (c = ((sizeof(unsigned long int) * 8) - 1); c >= 0; c--)
	{
		k = n >> c;

		if (k)
		{
			if (k & 1)
				_putchar('1');
			else
				_putchar('0');
		}
	}
}
