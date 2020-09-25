#include "holberton.h"

/**
 * more_numbers - Entry point
 * number: print
 * diez @a @b:
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int number, diez, a, b;

	for (diez = '0' ; diez <= '9' ; diez++)
	{
		for (number = 0 ; number <= 14 ; number++)
		{
			if (number < 10)
			b = number;

			else
			{
			a = number / 10;
			b = number % 10;
			_putchar ('0' + a);
			}
		_putchar('0' + b);
		}
	_putchar('\n');
	}
}
