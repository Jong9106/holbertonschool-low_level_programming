#include "holberton.h"

/**
 * _puts_recursion - Entry point
 * @s: poiter to a string
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
