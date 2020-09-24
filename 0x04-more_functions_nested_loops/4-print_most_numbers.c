#include "holberton.h"

/**
 * print_most_numbers - Entry point
 * number: print no 2-4
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int number;

	for (number = '0' ; number <= '9' ; number++)
	{
		if (number  != '2' && number != '4')
		_putchar(number);
	}
_putchar('\n');
}
