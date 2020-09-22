#include "holberton.h"
#include <stdio.h>
/**
 * print_last_digit - Entry point
 *@d: integrer to check
 * Return: Always 0 (Success)
 */

int print_last_digit(int d)
{
	int l = d % 10;

	if (d >= 0)
	{
	_putchar('0' + l);
	return (l);
	}
	else
	{
	l = l * (-1);
	_putchar('0' + l);
	return (l);
	}
}
