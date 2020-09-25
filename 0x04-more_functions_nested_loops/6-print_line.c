#include "holberton.h"

/**
 * print_line - Entry point
 * @n: number
 * contador: count
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int contador;

	if (n > 0)
	{
		for (contador = 0 ; contador <= n ; contador++)
		{
		_putchar(95);
		}
	}
_putchar('\n');
}
