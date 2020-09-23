#include "holberton.h"

/**
 * times_table - Entry point
 * print  9 times table
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int n, j, t;

	for (n = 0; n <= 9; n++)
	{
		for (j = 0; j <= 9; j++)
		{
			t = (n * j);
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (t >= 10)
			{
				_putchar((t / 10) + '0');
				_putchar((t % 10) + '0');
			}
			else if (t < 10 && j != 0)
			{
				_putchar(' ');
				_putchar((t % 10) + '0');
			}
			else
				_putchar((t % 10) + '0');
		}
		_putchar('\n');
	}
}
