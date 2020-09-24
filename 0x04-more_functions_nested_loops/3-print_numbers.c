#include "holberton.h"

/**
 * print_numbers - Entry point
 * number: print
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int number;

	for (number = '0' ; number <= '9' ; number++)
	{
		_putchar(number);
	}
_putchar('\n');
}
